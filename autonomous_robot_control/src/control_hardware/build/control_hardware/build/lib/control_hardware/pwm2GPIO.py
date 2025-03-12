#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import numpy as np

import RPi.GPIO as GPIO
from time import sleep

from robot_common_interfaces.msg import SerComStruct

#This ROS 2 node, `PwmSubNode`, subscribes to the `motor_throttle_control` topic, 
#receiving messages that dictate PWM values and control signals for a differential drive robot's motors.
# It sets the duty cycles for left and right motors based on incoming messages,
# manages reverse direction states, and controls gear settings using the Raspberry Pi's GPIO pins.



class PwmSubNode(Node):
	def __init__(self):
		super().__init__('ser_com_subscriber')
		self.get_logger().info("Node initiated")
		self.sub_ = self.create_subscription(SerComStruct, 'motor_throttle_control', self.listener_callback, 10)
		
		# Pin layout 
		self.pwm_l = 12          # pwm of left/right wheel
		self.pwm_r = 33 
		self.is_reverse_l = 10   # reverse state of left/right wheel
		self.is_reverse_r = 35 
		self.gear_l = 8         # gear state of left/right wheel
		self.gear_r = 37 

		# GPIO setup
		GPIO.setwarnings(False)
		GPIO.setmode(GPIO.BCM)
		GPIO.setup(self.pwm_l,GPIO.OUT)
		GPIO.setup(self.pwm_r,GPIO.OUT)
		GPIO.setup(self.is_reverse_l,GPIO.OUT)
		GPIO.setup(self.is_reverse_r,GPIO.OUT)
		GPIO.setup(self.gear_l,GPIO.OUT)
		GPIO.setup(self.gear_r,GPIO.OUT)

		# Initialize PWM
		self.left_throttle = GPIO.PWM(self.pwm_l, 500) # setting 500 Hz
		self.right_throttle = GPIO.PWM(self.pwm_r, 500)
		self.left_throttle.start(0)
		self.right_throttle.start(0)
		self.prev_msg = True 

	def listener_callback(self, msg):		
		
		if msg.pwm_l > 1 and msg.pwm_r > 1:
			self.get_logger().info(f"PWM:\nLeft: {msg.pwm_l}, Right: {msg.pwm_r}")
			self.get_logger().info(f"Reverse direction:\nLeft : {msg.is_reverse_dir_l}, Right: {msg.is_reverse_dir_r}")
		elif msg.pwm_l < 0 or msg.pwm_r < 0:
			self.get_logger().error(f"Sending negative PWM: \nLeft: {msg.pwm_l}, Right: {msg.pwm_r}")

		# Set PWM values
		self.left_throttle.ChangeDutyCycle(msg.pwm_l)
		self.right_throttle.ChangeDutyCycle(msg.pwm_r)

		# Set reverse values
		GPIO.output(self.is_reverse_l, msg.is_reverse_dir_l)
		GPIO.output(self.is_reverse_r, msg.is_reverse_dir_r)

		# Set gear values
		GPIO.output(self.gear_l, msg.gear)
		GPIO.output(self.gear_r, msg.gear)
		if msg.gear is not self.prev_msg:
			self.get_logger().info(f"Gear changed to {'LOW' if msg.gear else 'HIGH'}")
			self.prev_msg = msg.gear
		

def main(args=None):
	rclpy.init(args=None)
	node = PwmSubNode()
	rclpy.spin(node)
	node.destroy_node()
	rclpy.shutdown()

if __name__ == "__main__":
	main()