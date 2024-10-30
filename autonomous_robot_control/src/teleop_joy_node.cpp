#include "rclcpp/rclcpp.hpp" 
#include "sensor_msgs/msg/joy.hpp" 
#include "geometry_msgs/msg/twist.hpp" // Include the Twist message type for velocity commands

//This code is a basic teleoperation node that reads joystick input and
// publishes velocity commands to control a robot, General code for any robot 
class MyJoy : public rclcpp::Node
{
public:
    MyJoy() // Constructor for the MyJoy class
    : Node("teleop_joy_node") // Initialize the node with the name "teleop_joy_node"
    {
        // Create a publisher for geometry_msgs::msg::Twist messages on the "/cmd_vel" topic
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>(
            "/cmd_vel", 10);
        
        // Create a subscription to the "/joy" topic for sensor_msgs::msg::Joy messages
        subscriber_ = this->create_subscription<sensor_msgs::msg::Joy>(
            "/joy", 10, std::bind(&MyJoy::callback, this, std::placeholders::_1)); // Bind the callback function
    }

private:
    void callback(const sensor_msgs::msg::Joy::SharedPtr msg) // Callback function for joystick input
    {
        auto twist_message = geometry_msgs::msg::Twist(); // Create a Twist message to hold velocity commands
        
        // Set rotation speed based on joystick input
        twist_message.angular.z = msg->axes[0];

        // Calculate linear speed for forward movement
        if(msg->axes[5] >= 0){ // If the joystick axis for forward motion is positive
            twist_message.linear.x = -(msg->axes[5]) / 2.0 + 0.5; // Normalize and scale the value
        }
        else{ // If the joystick axis for forward motion is negative
            twist_message.linear.x = (-msg->axes[5] + 1.0) / 2.0; // Normalize and scale the value
        }

        // Boost/HighSpeed button (ONLY forward if comes before 'Reverse' logic)           - comment one of us
        // if(msg->buttons[1]) // Check if the boost button is pressed
        //     twist_message.linear.x = twist_message.linear.x * 2.0; // Double the forward speed

        // Reverse movement (only if the current linear speed is not positive)
        if(twist_message.linear.x <= 0){
            if(msg->axes[2] >= 0){ // If the joystick axis for reverse motion is positive
                twist_message.linear.x = (msg->axes[2]) / 2.0 - 0.5; // Normalize and scale the value for reverse
            }
            else{ // If the joystick axis for reverse motion is negative
                twist_message.linear.x = (msg->axes[2] - 1.0) / 2.0; // Normalize and scale the value for reverse
            }
        }

        // Boost/HighSpeed button (ALSO for reverse if comes after 'Reverse' logic)        - comment one of us
        if(msg->buttons[1]) // Check if the boost button is pressed
            twist_message.linear.x = twist_message.linear.x * 2.0; // Double the speed (for both forward and reverse)

        // Drift (high rotation speed) based on button input
        if(msg->buttons[4]) // If the drift button is pressed
            twist_message.angular.z = twist_message.angular.z * 2.0; // Double the angular speed for drifting

        // Publish the Twist message to the "/cmd_vel" topic
        publisher_->publish(twist_message);
        
        // Log the linear and angular velocities being published
        RCLCPP_INFO(this->get_logger(), "Publishing velocities - Linear: '%f' , Angular: '%f'", twist_message.linear.x, twist_message.angular.z);
    
    }

    // Define publisher and subscriber shared pointers
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_; // Publisher for Twist messages
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscriber_; // Subscriber for Joy messages
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv); // Initialize the ROS 2 system
    rclcpp::spin(std::make_shared<MyJoy>()); // Create and spin the MyJoy node
    rclcpp::shutdown(); // Shutdown the ROS 2 system
    return 0; // Exit the program
}
