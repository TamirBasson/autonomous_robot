#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import gpiod
import threading
from time import sleep

from robot_common_interfaces.msg import SerComStruct

# This ROS 2 node, `PwmSubNode`, subscribes to the `motor_throttle_control` topic,
# receiving messages that dictate PWM values and control signals for a differential drive robot's motors.
# It sets the duty cycles for left and right motors based on incoming messages,
# manages reverse direction states, and controls gear settings using GPIO pins.

class PwmSubNode(Node):
    def __init__(self):
        super().__init__('ser_com_subscriber')
        self.get_logger().info("Node initiated")
        self.sub_ = self.create_subscription(
            SerComStruct,
            'motor_throttle_control',
            self.listener_callback,
            10
        )

        # Pin layout
        self.pwm_l = 18          # PWM of left wheel
        self.pwm_r = 13          # PWM of right wheel
        self.is_reverse_l = 15   # Reverse state of left wheel
        self.is_reverse_r = 19   # Reverse state of right wheel
        self.gear_l = 14          # Gear state of left wheel
        self.gear_r = 26         # Gear state of right wheel

        # Initialize GPIO chip and lines
        self.chip = gpiod.Chip("gpiochip0")
        self.gpios = {
            'pwm_l': self.chip.get_line(self.pwm_l),
            'pwm_r': self.chip.get_line(self.pwm_r),
            'is_reverse_l': self.chip.get_line(self.is_reverse_l),
            'is_reverse_r': self.chip.get_line(self.is_reverse_r),
            'gear_l': self.chip.get_line(self.gear_l),
            'gear_r': self.chip.get_line(self.gear_r),
        }

        # Request GPIO lines as outputs
        for name, line in self.gpios.items():
            line.request(consumer="PwmSubNode", type=gpiod.LINE_REQ_DIR_OUT)
            self.get_logger().info(f"Configured {name} as output")

        # Initialize PWM simulation
        self.pwm_threads = {}
        self.running = True

    def listener_callback(self, msg):
        # Log PWM and direction data
        if msg.pwm_l > 1 and msg.pwm_r > 1:
            self.get_logger().info(
                f"PWM:\nLeft: {msg.pwm_l}, Right: {msg.pwm_r}\n"
                f"Reverse direction:\nLeft: {msg.is_reverse_dir_l}, Right: {msg.is_reverse_dir_r}"
            )
        elif msg.pwm_l < 0 or msg.pwm_r < 0:
            self.get_logger().error(f"Sending negative PWM: \nLeft: {msg.pwm_l}, Right: {msg.pwm_r}")

        # Set reverse values
        self.gpios['is_reverse_l'].set_value(msg.is_reverse_dir_l)
        self.gpios['is_reverse_r'].set_value(msg.is_reverse_dir_r)

        # Set gear values
        self.gpios['gear_l'].set_value(msg.gear)
        self.gpios['gear_r'].set_value(msg.gear)

        # Update PWM duty cycles
        self.set_pwm('pwm_l', msg.pwm_l)
        self.set_pwm('pwm_r', msg.pwm_r)

    def set_pwm(self, name, duty_cycle):
        """Simulate PWM by toggling the GPIO line at the specified duty cycle."""
        # Optionally clamp the duty cycle to [0, 100]
        if duty_cycle < 0:
            self.get_logger().warning(f"Duty cycle for {name} is below 0, clamping to 0.")
            duty_cycle = 0
        elif duty_cycle > 100:
            self.get_logger().warning(f"Duty cycle for {name} is above 100, clamping to 100.")
            duty_cycle = 100

        # If a previous PWM thread is running for this pin, stop it
        if name in self.pwm_threads:
            self.pwm_threads[name]['control']['running'] = False
            self.pwm_threads[name]['thread'].join()

        period = 1 / 500.0  # 500 Hz
        high_time = (duty_cycle / 100.0) * period
        low_time = period - high_time

        def pwm_task(line, high_t, low_t, control):
            while control['running']:
                if high_t > 0:
                    line.set_value(1)
                    sleep(high_t)
                if low_t > 0:
                    line.set_value(0)
                    sleep(low_t)

        control = {'running': True}
        line = self.gpios[name]
        thread = threading.Thread(
            target=pwm_task,
            args=(line, high_time, low_time, control),
            daemon=True
        )
        self.pwm_threads[name] = {'thread': thread, 'control': control}
        thread.start()

    def stop_pwm(self):
        """Stop all PWM threads."""
        self.running = False
        for name, data in self.pwm_threads.items():
            data['control']['running'] = False
            data['thread'].join()

    def destroy_node(self):
        # Stop PWM before shutting down the node
        self.stop_pwm()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = PwmSubNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
