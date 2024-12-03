// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_common_interfaces:msg/SerComStruct.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_COMMON_INTERFACES__MSG__DETAIL__SER_COM_STRUCT__BUILDER_HPP_
#define ROBOT_COMMON_INTERFACES__MSG__DETAIL__SER_COM_STRUCT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_common_interfaces/msg/detail/ser_com_struct__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_SerComStruct_gear
{
public:
  explicit Init_SerComStruct_gear(::robot_common_interfaces::msg::SerComStruct & msg)
  : msg_(msg)
  {}
  ::robot_common_interfaces::msg::SerComStruct gear(::robot_common_interfaces::msg::SerComStruct::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_common_interfaces::msg::SerComStruct msg_;
};

class Init_SerComStruct_is_reverse_dir_r
{
public:
  explicit Init_SerComStruct_is_reverse_dir_r(::robot_common_interfaces::msg::SerComStruct & msg)
  : msg_(msg)
  {}
  Init_SerComStruct_gear is_reverse_dir_r(::robot_common_interfaces::msg::SerComStruct::_is_reverse_dir_r_type arg)
  {
    msg_.is_reverse_dir_r = std::move(arg);
    return Init_SerComStruct_gear(msg_);
  }

private:
  ::robot_common_interfaces::msg::SerComStruct msg_;
};

class Init_SerComStruct_is_reverse_dir_l
{
public:
  explicit Init_SerComStruct_is_reverse_dir_l(::robot_common_interfaces::msg::SerComStruct & msg)
  : msg_(msg)
  {}
  Init_SerComStruct_is_reverse_dir_r is_reverse_dir_l(::robot_common_interfaces::msg::SerComStruct::_is_reverse_dir_l_type arg)
  {
    msg_.is_reverse_dir_l = std::move(arg);
    return Init_SerComStruct_is_reverse_dir_r(msg_);
  }

private:
  ::robot_common_interfaces::msg::SerComStruct msg_;
};

class Init_SerComStruct_pwm_r
{
public:
  explicit Init_SerComStruct_pwm_r(::robot_common_interfaces::msg::SerComStruct & msg)
  : msg_(msg)
  {}
  Init_SerComStruct_is_reverse_dir_l pwm_r(::robot_common_interfaces::msg::SerComStruct::_pwm_r_type arg)
  {
    msg_.pwm_r = std::move(arg);
    return Init_SerComStruct_is_reverse_dir_l(msg_);
  }

private:
  ::robot_common_interfaces::msg::SerComStruct msg_;
};

class Init_SerComStruct_pwm_l
{
public:
  Init_SerComStruct_pwm_l()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SerComStruct_pwm_r pwm_l(::robot_common_interfaces::msg::SerComStruct::_pwm_l_type arg)
  {
    msg_.pwm_l = std::move(arg);
    return Init_SerComStruct_pwm_r(msg_);
  }

private:
  ::robot_common_interfaces::msg::SerComStruct msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_common_interfaces::msg::SerComStruct>()
{
  return robot_common_interfaces::msg::builder::Init_SerComStruct_pwm_l();
}

}  // namespace robot_common_interfaces

#endif  // ROBOT_COMMON_INTERFACES__MSG__DETAIL__SER_COM_STRUCT__BUILDER_HPP_
