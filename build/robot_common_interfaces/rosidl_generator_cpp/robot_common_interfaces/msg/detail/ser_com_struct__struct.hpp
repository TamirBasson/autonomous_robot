// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_common_interfaces:msg/SerComStruct.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_COMMON_INTERFACES__MSG__DETAIL__SER_COM_STRUCT__STRUCT_HPP_
#define ROBOT_COMMON_INTERFACES__MSG__DETAIL__SER_COM_STRUCT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_common_interfaces__msg__SerComStruct __attribute__((deprecated))
#else
# define DEPRECATED__robot_common_interfaces__msg__SerComStruct __declspec(deprecated)
#endif

namespace robot_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SerComStruct_
{
  using Type = SerComStruct_<ContainerAllocator>;

  explicit SerComStruct_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pwm_l = 0ll;
      this->pwm_r = 0ll;
      this->is_reverse_dir_l = false;
      this->is_reverse_dir_r = false;
      this->gear = false;
    }
  }

  explicit SerComStruct_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pwm_l = 0ll;
      this->pwm_r = 0ll;
      this->is_reverse_dir_l = false;
      this->is_reverse_dir_r = false;
      this->gear = false;
    }
  }

  // field types and members
  using _pwm_l_type =
    int64_t;
  _pwm_l_type pwm_l;
  using _pwm_r_type =
    int64_t;
  _pwm_r_type pwm_r;
  using _is_reverse_dir_l_type =
    bool;
  _is_reverse_dir_l_type is_reverse_dir_l;
  using _is_reverse_dir_r_type =
    bool;
  _is_reverse_dir_r_type is_reverse_dir_r;
  using _gear_type =
    bool;
  _gear_type gear;

  // setters for named parameter idiom
  Type & set__pwm_l(
    const int64_t & _arg)
  {
    this->pwm_l = _arg;
    return *this;
  }
  Type & set__pwm_r(
    const int64_t & _arg)
  {
    this->pwm_r = _arg;
    return *this;
  }
  Type & set__is_reverse_dir_l(
    const bool & _arg)
  {
    this->is_reverse_dir_l = _arg;
    return *this;
  }
  Type & set__is_reverse_dir_r(
    const bool & _arg)
  {
    this->is_reverse_dir_r = _arg;
    return *this;
  }
  Type & set__gear(
    const bool & _arg)
  {
    this->gear = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_common_interfaces::msg::SerComStruct_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_common_interfaces::msg::SerComStruct_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_common_interfaces::msg::SerComStruct_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_common_interfaces::msg::SerComStruct_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_common_interfaces::msg::SerComStruct_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_common_interfaces::msg::SerComStruct_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_common_interfaces::msg::SerComStruct_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_common_interfaces::msg::SerComStruct_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_common_interfaces::msg::SerComStruct_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_common_interfaces::msg::SerComStruct_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_common_interfaces__msg__SerComStruct
    std::shared_ptr<robot_common_interfaces::msg::SerComStruct_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_common_interfaces__msg__SerComStruct
    std::shared_ptr<robot_common_interfaces::msg::SerComStruct_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerComStruct_ & other) const
  {
    if (this->pwm_l != other.pwm_l) {
      return false;
    }
    if (this->pwm_r != other.pwm_r) {
      return false;
    }
    if (this->is_reverse_dir_l != other.is_reverse_dir_l) {
      return false;
    }
    if (this->is_reverse_dir_r != other.is_reverse_dir_r) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerComStruct_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerComStruct_

// alias to use template instance with default allocator
using SerComStruct =
  robot_common_interfaces::msg::SerComStruct_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_common_interfaces

#endif  // ROBOT_COMMON_INTERFACES__MSG__DETAIL__SER_COM_STRUCT__STRUCT_HPP_
