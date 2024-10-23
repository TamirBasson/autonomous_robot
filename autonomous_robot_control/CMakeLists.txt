cmake_minimum_required(VERSION 3.8)
project(autonomous_robot_control)

# Set compiler warnings for GCC and Clang
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(robot_common_interfaces REQUIRED)

# Define include directories
include_directories(include)

# Add the library (class definition)
add_library(autonomous_robot_control
  src/joy_compute_control.cpp
)

# Add executables for the nodes
add_executable(teleop_joy_node src/teleop_joy_node.cpp)
ament_target_dependencies(teleop_joy_node rclcpp geometry_msgs sensor_msgs)

add_executable(prototype_joy_driver src/prototype_joy_driver.cpp)
ament_target_dependencies(prototype_joy_driver rclcpp robot_common_interfaces sensor_msgs) #
target_link_libraries(prototype_joy_driver autonomous_robot_control)


# Install the targets (executables and library)
install(TARGETS
  teleop_joy_node # Node executable
  prototype_joy_driver # Node executable
  autonomous_robot_control # Library
  DESTINATION lib/${PROJECT_NAME} # Install location
)

# Install header files
install(
  DIRECTORY include/  # Specify the include directory
  DESTINATION include/${PROJECT_NAME}  # Install headers to include directory
)

# Install additional directories such as launch files
install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}/
)

ament_package()
