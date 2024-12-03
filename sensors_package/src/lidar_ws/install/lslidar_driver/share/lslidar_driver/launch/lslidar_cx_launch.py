#!/usr/bin/python3
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import LifecycleNode
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

import lifecycle_msgs.msg
import os
import subprocess


def generate_launch_description():
    # Path to the driver parameters file
    driver_dir = os.path.join(get_package_share_directory('lslidar_driver'), 'params', 'lslidar_cx.yaml')

    # Check ROS distribution
    p = subprocess.Popen("echo $ROS_DISTRO", stdout=subprocess.PIPE, shell=True)
    ros_version = p.communicate()[0].strip()
    driver_node = None

    if ros_version in [b'dashing', b'eloquent']:
        print("ROS VERSION: dashing/eloquent")
        driver_node = LifecycleNode(
            package='lslidar_driver',
            node_namespace='cx',
            node_executable='lslidar_driver_node',
            node_name='lslidar_driver_node',
            output='screen',
            parameters=[driver_dir],
        )
    elif ros_version in [b'foxy', b'galactic', b'humble']:
        print("ROS VERSION: foxy/galactic/humble")
        driver_node = LifecycleNode(
            package='lslidar_driver',
            namespace='cx',
            executable='lslidar_driver_node',
            name='lslidar_driver_node',
            output='screen',
            emulate_tty=True,
            parameters=[driver_dir],
        )
    else:
        print("Please configure the ROS environment")
        exit()

    # Include pointcloud_to_laserscan node
    pointcloud_to_laserscan_node = Node(
        package='pointcloud_to_laserscan',
        executable='pointcloud_to_laserscan_node',
        remappings=[
            ('cloud_in', [LaunchConfiguration('cx'), '/lslidar_point_cloud']),
            ('scan','/scan')
        ],
        parameters=[{
            'target_frame': 'map',
            'transform_tolerance': 0.01,
            'min_height': 0.0,
            'max_height': 1.0,
            'angle_min': -3.14159,  # -180 degrees
            'angle_max': 3.14159,  # +180 degrees
            'angle_increment': 0.0087,  # M_PI/360.0
            'scan_time': 0.3333,
            'range_min': 0.45,
            'range_max': 6.0,
            'use_inf': True,
            'inf_epsilon': 1.0
        }],
        name='pointcloud_to_laserscan'
    )

    # Static transform publisher for point cloud to laser scan
    static_transform_publisher = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='static_transform_publisher',
        arguments=[
            '--x', '0', '--y', '0', '--z', '0',
            '--qx', '0', '--qy', '0', '--qz', '0', '--qw', '1',
            '--frame-id', 'map', '--child-frame-id', 'cloud'
        ]
    )

    return LaunchDescription([
        DeclareLaunchArgument(
            name='cx',
            default_value='cx',
            description='Namespace for sample topics'
        ),
        driver_node,
        static_transform_publisher,
        pointcloud_to_laserscan_node
    ])
