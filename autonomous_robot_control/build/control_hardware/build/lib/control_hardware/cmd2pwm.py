#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from robot_common_interfaces.msg import SerComStruct

class CmdVelToPwmNode(Node):
    def __init__(self):
        super().__init__('cmd_vel_to_pwm')
        # Subscribe to '/cmd_vel_muxed'
        self.subscription = self.create_subscription(Twist, '/cmd_vel_muxed', self.cmd_vel_callback, 10)
        # Publish to 'motor_throttle_control'
        self.publisher = self.create_publisher(SerComStruct, 'motor_throttle_control', 10)

        # Parameters
        self.wheel_base = 0.7  # Distance between wheels (meters)

    def cmd_vel_callback(self, msg):
        """Callback for processing Twist messages and converting to PWM commands."""
        # Extract linear and angular velocities
        linear_x = msg.linear.x
        angular_z = msg.angular.z

        # Calculate left and right wheel velocities
        v_left = linear_x - (self.wheel_base / 2.0) * angular_z
        v_right = linear_x + (self.wheel_base / 2.0) * angular_z

        # Convert wheel velocities to PWM (low gear only)
        pwm_left = self.velocity_to_pwm(v_left)
        pwm_right = self.velocity_to_pwm(v_right)

        # Prepare and publish control message
        control_msg = SerComStruct()
        control_msg.pwm_l = abs(pwm_left)
        control_msg.pwm_r = abs(pwm_right)
        control_msg.is_reverse_dir_l = 1 if pwm_left < 0 else 0
        control_msg.is_reverse_dir_r = 1 if pwm_right < 0 else 0
        control_msg.gear = 0  # Static to low gear

        self.publisher.publish(control_msg)

    def velocity_to_pwm(self, velocity):
        """
        Map wheel angular velocity (rad/s) to PWM duty cycle percentage.
        Args:
            velocity (float): Angular velocity (rad/s).
        Returns:
            int: Signed PWM duty cycle percentage, where negative indicates reverse direction.
        """
        threshold = 0.05  # Threshold for PWM output
        pwm_outp = 0  # Default PWM value

        if -threshold <= velocity <= threshold:
            return pwm_outp  # No movement, return 0

        if velocity > threshold:  # Forward low gear
            pwm_outp = int(7.2374 * velocity + 64.5066)
        elif velocity < -threshold:  # Backward low gear
            abs_velocity = abs(velocity)
            pwm_outp = -int((6.921 * abs_velocity + 65.9686) * 1.4)  # Negative for reverse

        return pwm_outp

def main(args=None):
    rclpy.init(args=args)
    node = CmdVelToPwmNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()