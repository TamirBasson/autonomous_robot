// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lslidar_msgs:srv/TimeService.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__TIME_SERVICE__STRUCT_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__TIME_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lslidar_msgs__srv__TimeService_Request __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_msgs__srv__TimeService_Request __declspec(deprecated)
#endif

namespace lslidar_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TimeService_Request_
{
  using Type = TimeService_Request_<ContainerAllocator>;

  explicit TimeService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_service_mode = "";
      this->ntp_ip = "";
    }
  }

  explicit TimeService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_service_mode(_alloc),
    ntp_ip(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_service_mode = "";
      this->ntp_ip = "";
    }
  }

  // field types and members
  using _time_service_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _time_service_mode_type time_service_mode;
  using _ntp_ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ntp_ip_type ntp_ip;

  // setters for named parameter idiom
  Type & set__time_service_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->time_service_mode = _arg;
    return *this;
  }
  Type & set__ntp_ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ntp_ip = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lslidar_msgs::srv::TimeService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_msgs::srv::TimeService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_msgs::srv::TimeService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_msgs::srv::TimeService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::TimeService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::TimeService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::TimeService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::TimeService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_msgs::srv::TimeService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_msgs::srv::TimeService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_msgs__srv__TimeService_Request
    std::shared_ptr<lslidar_msgs::srv::TimeService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_msgs__srv__TimeService_Request
    std::shared_ptr<lslidar_msgs::srv::TimeService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeService_Request_ & other) const
  {
    if (this->time_service_mode != other.time_service_mode) {
      return false;
    }
    if (this->ntp_ip != other.ntp_ip) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeService_Request_

// alias to use template instance with default allocator
using TimeService_Request =
  lslidar_msgs::srv::TimeService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lslidar_msgs


#ifndef _WIN32
# define DEPRECATED__lslidar_msgs__srv__TimeService_Response __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_msgs__srv__TimeService_Response __declspec(deprecated)
#endif

namespace lslidar_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TimeService_Response_
{
  using Type = TimeService_Response_<ContainerAllocator>;

  explicit TimeService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit TimeService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lslidar_msgs::srv::TimeService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_msgs::srv::TimeService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_msgs::srv::TimeService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_msgs::srv::TimeService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::TimeService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::TimeService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::TimeService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::TimeService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_msgs::srv::TimeService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_msgs::srv::TimeService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_msgs__srv__TimeService_Response
    std::shared_ptr<lslidar_msgs::srv::TimeService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_msgs__srv__TimeService_Response
    std::shared_ptr<lslidar_msgs::srv::TimeService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeService_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeService_Response_

// alias to use template instance with default allocator
using TimeService_Response =
  lslidar_msgs::srv::TimeService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lslidar_msgs

namespace lslidar_msgs
{

namespace srv
{

struct TimeService
{
  using Request = lslidar_msgs::srv::TimeService_Request;
  using Response = lslidar_msgs::srv::TimeService_Response;
};

}  // namespace srv

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__SRV__DETAIL__TIME_SERVICE__STRUCT_HPP_
