// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_common_interfaces:msg/SerComStruct.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_COMMON_INTERFACES__MSG__DETAIL__SER_COM_STRUCT__TRAITS_HPP_
#define ROBOT_COMMON_INTERFACES__MSG__DETAIL__SER_COM_STRUCT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_common_interfaces/msg/detail/ser_com_struct__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_common_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SerComStruct & msg,
  std::ostream & out)
{
  out << "{";
  // member: pwm_l
  {
    out << "pwm_l: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_l, out);
    out << ", ";
  }

  // member: pwm_r
  {
    out << "pwm_r: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_r, out);
    out << ", ";
  }

  // member: is_reverse_dir_l
  {
    out << "is_reverse_dir_l: ";
    rosidl_generator_traits::value_to_yaml(msg.is_reverse_dir_l, out);
    out << ", ";
  }

  // member: is_reverse_dir_r
  {
    out << "is_reverse_dir_r: ";
    rosidl_generator_traits::value_to_yaml(msg.is_reverse_dir_r, out);
    out << ", ";
  }

  // member: gear
  {
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SerComStruct & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pwm_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_l: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_l, out);
    out << "\n";
  }

  // member: pwm_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_r: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_r, out);
    out << "\n";
  }

  // member: is_reverse_dir_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_reverse_dir_l: ";
    rosidl_generator_traits::value_to_yaml(msg.is_reverse_dir_l, out);
    out << "\n";
  }

  // member: is_reverse_dir_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_reverse_dir_r: ";
    rosidl_generator_traits::value_to_yaml(msg.is_reverse_dir_r, out);
    out << "\n";
  }

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SerComStruct & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_common_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_common_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_common_interfaces::msg::SerComStruct & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_common_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_common_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_common_interfaces::msg::SerComStruct & msg)
{
  return robot_common_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_common_interfaces::msg::SerComStruct>()
{
  return "robot_common_interfaces::msg::SerComStruct";
}

template<>
inline const char * name<robot_common_interfaces::msg::SerComStruct>()
{
  return "robot_common_interfaces/msg/SerComStruct";
}

template<>
struct has_fixed_size<robot_common_interfaces::msg::SerComStruct>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_common_interfaces::msg::SerComStruct>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_common_interfaces::msg::SerComStruct>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_COMMON_INTERFACES__MSG__DETAIL__SER_COM_STRUCT__TRAITS_HPP_
