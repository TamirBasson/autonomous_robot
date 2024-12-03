#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from tf2_ros import TransformBroadcaster
from geometry_msgs.msg import TransformStamped
import math

class OdometryPublisher(Node):
    def __init__(self):
        super().__init__('odometry_publisher')
        # Subscription to cmd_vel_muxed
        self.subscription = self.create_subscription(
            Twist,
            '/cmd_vel_muxed',
            self.cmd_vel_callback,
            10
        )
        
        # Odometry publisher
        self.odom_publisher = self.create_publisher(Odometry, '/encoder_odom', 10)

        # Transform broadcaster (for tf2)
        self.br = TransformBroadcaster(self)

        # Robot parameters
        self.wheel_base = 0.7  # Distance between wheels (meters)
        self.wheel_radius = 0.16  # Wheel radius (meters)

        # Initial odometry
        self.x = 0.0
        self.y = 0.0
        self.theta = 0.0

        # Previous time
        self.last_time = self.get_clock().now()

    def cmd_vel_callback(self, msg):
        """Callback for processing Twist messages and converting to odometry."""
        # Get linear and angular velocities
        v_linear = msg.linear.x
        omega = msg.angular.z

        # Calculate wheel velocities
        v_left = v_linear - (self.wheel_base / 2.0) * omega
        v_right = v_linear + (self.wheel_base / 2.0) * omega

        # Compute wheel RPM (from velocity)
        rpm_left = self.velocity_to_rpm(v_left)
        rpm_right = self.velocity_to_rpm(v_right)

        # Time step
        current_time = self.get_clock().now()
        dt = (current_time - self.last_time).nanoseconds * 1e-9  # Convert nanoseconds to seconds

        # Update odometry
        d = (v_left + v_right) / 2.0 * dt
        delta_theta = (v_right - v_left) / self.wheel_base * dt

        # Update position and orientation
        self.x += d * math.cos(self.theta)
        self.y += d * math.sin(self.theta)
        self.theta += delta_theta

        # Create and publish Odometry message
        odom_msg = Odometry()
        odom_msg.header.stamp = current_time.to_msg()  # Convert to Time message
        odom_msg.header.frame_id = 'odom'
        odom_msg.child_frame_id = 'base_link'

        # Position
        odom_msg.pose.pose.position.x = self.x
        odom_msg.pose.pose.position.y = self.y
        odom_msg.pose.pose.orientation.z = math.sin(self.theta / 2.0)
        odom_msg.pose.pose.orientation.w = math.cos(self.theta / 2.0)

        # Velocity
        odom_msg.twist.twist.linear.x = v_linear
        odom_msg.twist.twist.angular.z = omega

        # Publish Odometry
        self.odom_publisher.publish(odom_msg)

        # Broadcast transform
        t = TransformStamped()
        t.header.stamp = current_time.to_msg()  # Convert to Time message
        t.header.frame_id = 'odom'
        t.child_frame_id = 'base_link'

        t.transform.translation.x = self.x
        t.transform.translation.y = self.y
        t.transform.rotation.z = math.sin(self.theta / 2.0)
        t.transform.rotation.w = math.cos(self.theta / 2.0)

        self.br.sendTransform(t)

        # Update last time
        self.last_time = current_time

    def velocity_to_rpm(self, velocity):
        """Convert velocity (m/s) to RPM (revolutions per minute)."""
        # RPM = velocity / (2 * pi * radius) * 60
        return (velocity / (2 * math.pi * self.wheel_radius)) * 60.0


def main(args=None):
    rclpy.init(args=args)
    node = OdometryPublisher()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
