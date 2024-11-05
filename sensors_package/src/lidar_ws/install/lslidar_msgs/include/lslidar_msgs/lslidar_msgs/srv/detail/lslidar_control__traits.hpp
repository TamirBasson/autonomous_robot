// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_msgs:srv/LslidarControl.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__LSLIDAR_CONTROL__TRAITS_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__LSLIDAR_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lslidar_msgs/srv/detail/lslidar_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lslidar_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LslidarControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: laser_control
  {
    out << "laser_control: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_control, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LslidarControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: laser_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_control: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_control, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LslidarControl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lslidar_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lslidar_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lslidar_msgs::srv::LslidarControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lslidar_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lslidar_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lslidar_msgs::srv::LslidarControl_Request & msg)
{
  return lslidar_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lslidar_msgs::srv::LslidarControl_Request>()
{
  return "lslidar_msgs::srv::LslidarControl_Request";
}

template<>
inline const char * name<lslidar_msgs::srv::LslidarControl_Request>()
{
  return "lslidar_msgs/srv/LslidarControl_Request";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::LslidarControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_msgs::srv::LslidarControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_msgs::srv::LslidarControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lslidar_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LslidarControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LslidarControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LslidarControl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lslidar_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lslidar_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lslidar_msgs::srv::LslidarControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lslidar_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lslidar_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lslidar_msgs::srv::LslidarControl_Response & msg)
{
  return lslidar_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lslidar_msgs::srv::LslidarControl_Response>()
{
  return "lslidar_msgs::srv::LslidarControl_Response";
}

template<>
inline const char * name<lslidar_msgs::srv::LslidarControl_Response>()
{
  return "lslidar_msgs/srv/LslidarControl_Response";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::LslidarControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_msgs::srv::LslidarControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_msgs::srv::LslidarControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::LslidarControl>()
{
  return "lslidar_msgs::srv::LslidarControl";
}

template<>
inline const char * name<lslidar_msgs::srv::LslidarControl>()
{
  return "lslidar_msgs/srv/LslidarControl";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::LslidarControl>
  : std::integral_constant<
    bool,
    has_fixed_size<lslidar_msgs::srv::LslidarControl_Request>::value &&
    has_fixed_size<lslidar_msgs::srv::LslidarControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<lslidar_msgs::srv::LslidarControl>
  : std::integral_constant<
    bool,
    has_bounded_size<lslidar_msgs::srv::LslidarControl_Request>::value &&
    has_bounded_size<lslidar_msgs::srv::LslidarControl_Response>::value
  >
{
};

template<>
struct is_service<lslidar_msgs::srv::LslidarControl>
  : std::true_type
{
};

template<>
struct is_service_request<lslidar_msgs::srv::LslidarControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lslidar_msgs::srv::LslidarControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_MSGS__SRV__DETAIL__LSLIDAR_CONTROL__TRAITS_HPP_
