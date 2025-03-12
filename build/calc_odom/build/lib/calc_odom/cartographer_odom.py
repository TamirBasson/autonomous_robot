import rclpy
from rclpy.node import Node
from tf2_ros import Buffer, TransformListener
from nav_msgs.msg import Odometry

class OdomRepublisher(Node):
    def __init__(self):
        super().__init__('odom_republisher')

        # TF Listener
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        # Publisher for odometry
        self.odom_publisher = self.create_publisher(Odometry, '/cartographer/odom', 10)

        # Timer to republish at 10 Hz
        self.timer = self.create_timer(0.1, self.publish_odom)

    def publish_odom(self):
        try:
            transform = self.tf_buffer.lookup_transform('odom', 'base_link', rclpy.time.Time())

            # Create an Odometry messages
            odom_msg = Odometry()
            odom_msg.header.stamp = self.get_clock().now().to_msg()
            odom_msg.header.frame_id = 'odom'
            odom_msg.child_frame_id = 'base_link'

            # Set pose
            odom_msg.pose.pose.position.x = transform.transform.translation.x
            odom_msg.pose.pose.position.y = transform.transform.translation.y
            odom_msg.pose.pose.position.z = transform.transform.translation.z
            odom_msg.pose.pose.orientation = transform.transform.rotation

            # Publish the odometry message
            self.odom_publisher.publish(odom_msg)
        except Exception as e:
            self.get_logger().warn(f"Could not fetch transform: {e}")

def main(args=None):
    rclpy.init(args=args)
    node = OdomRepublisher()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
