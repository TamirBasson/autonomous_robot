set(_AMENT_PACKAGE_NAME "sensors_package")
set(sensors_package_VERSION "0.0.0")
set(sensors_package_MAINTAINER "tamirbasson <tamirbasson99@gmail.com>")
set(sensors_package_BUILD_DEPENDS "rclpy" "rclcpp" "sensor_msgs" "cv2")
set(sensors_package_BUILDTOOL_DEPENDS "ament_cmake" "ament_cmake_python")
set(sensors_package_BUILD_EXPORT_DEPENDS "rclpy" "rclcpp" "sensor_msgs" "cv2")
set(sensors_package_BUILDTOOL_EXPORT_DEPENDS )
set(sensors_package_EXEC_DEPENDS "python3" "ros2launch" "ros2run" "rclpy" "rclcpp" "sensor_msgs" "cv2")
set(sensors_package_TEST_DEPENDS "ament_lint_auto" "ament_lint_common")
set(sensors_package_GROUP_DEPENDS )
set(sensors_package_MEMBER_OF_GROUPS )
set(sensors_package_DEPRECATED "")
set(sensors_package_EXPORT_TAGS)
list(APPEND sensors_package_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
