import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from launch.substitutions import Command, LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    # Path for URDF file
    urdf_path = PathJoinSubstitution([
        FindPackageShare("autonomous_robot_description"), "urdf", "autonomous_robot.urdf.xacro"
    ])

    # Path for RViz configuration file
    rviz_config_path = PathJoinSubstitution([
        FindPackageShare("autonomous_robot_description"), "rviz", "urdf_config.rviz"
    ])

    # Declare URDF file argument
    declare_urdf_path = DeclareLaunchArgument(
        name="urdf_path",
        default_value=urdf_path,
        description="Path to the robot URDF file"
    )

    # Declare RViz config file argument
    declare_rviz_config_path = DeclareLaunchArgument(
        name="rviz_config_path",
        default_value=rviz_config_path,
        description="Path to the RViz configuration file"
    )

    # Robot State Publisher for publishing robot description to TF
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="screen",
        parameters=[{
            "robot_description": Command(["xacro ", LaunchConfiguration("urdf_path")])
        }]
    )

    # Joint State Publisher to publish joint states for visualization
    joint_state_publisher = Node(
        package="joint_state_publisher",
        executable="joint_state_publisher",
        output="screen"
    )

    # Spawns the differential drive controller for wheel control
    diff_drive_controller = Node(
        package="controller_manager",
        executable="spawner",
        output="screen",
        arguments=["diff_cont"]
    )

    # Spawns the joint board controller to manage joint states
    joint_board_controller = Node(
        package="controller_manager",
        executable="spawner",
        output="screen",
        arguments=["joint_broad"]
    )

    # Launches RViz for visualizing robot state and sensor data
    rviz_launch = Node(
        package="rviz2",
        executable="rviz2",
        output="screen",
        arguments=["-d", LaunchConfiguration("rviz_config_path")]
    )

    # Twist Mux node to combine multiple velocity command sources
    twist_mux_params = os.path.join(get_package_share_directory('autonomous_robot_description'), 'config', 'twist_mux.yaml')
    twist_mux = Node(
        package="twist_mux",
        executable="twist_mux",
        parameters=[twist_mux_params],
        remappings=[('/cmd_vel_out', '/diff_cont/cmd_vel_unstamped')]
    )

    # Returns the entire launch configuration
    return LaunchDescription([
        declare_urdf_path,
        declare_rviz_config_path,
        robot_state_publisher,
        joint_state_publisher,
        diff_drive_controller,
        joint_board_controller,
        rviz_launch,
        twist_mux
    ])
