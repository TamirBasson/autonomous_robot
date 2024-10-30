// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lslidar_msgs:srv/DevPort.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__DEV_PORT__STRUCT_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__DEV_PORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lslidar_msgs__srv__DevPort_Request __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_msgs__srv__DevPort_Request __declspec(deprecated)
#endif

namespace lslidar_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DevPort_Request_
{
  using Type = DevPort_Request_<ContainerAllocator>;

  explicit DevPort_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dev_port = 0l;
    }
  }

  explicit DevPort_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dev_port = 0l;
    }
  }

  // field types and members
  using _dev_port_type =
    int32_t;
  _dev_port_type dev_port;

  // setters for named parameter idiom
  Type & set__dev_port(
    const int32_t & _arg)
  {
    this->dev_port = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lslidar_msgs::srv::DevPort_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_msgs::srv::DevPort_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_msgs::srv::DevPort_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_msgs::srv::DevPort_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::DevPort_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::DevPort_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::DevPort_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::DevPort_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_msgs::srv::DevPort_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_msgs::srv::DevPort_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_msgs__srv__DevPort_Request
    std::shared_ptr<lslidar_msgs::srv::DevPort_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_msgs__srv__DevPort_Request
    std::shared_ptr<lslidar_msgs::srv::DevPort_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DevPort_Request_ & other) const
  {
    if (this->dev_port != other.dev_port) {
      return false;
    }
    return true;
  }
  bool operator!=(const DevPort_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DevPort_Request_

// alias to use template instance with default allocator
using DevPort_Request =
  lslidar_msgs::srv::DevPort_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lslidar_msgs


#ifndef _WIN32
# define DEPRECATED__lslidar_msgs__srv__DevPort_Response __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_msgs__srv__DevPort_Response __declspec(deprecated)
#endif

namespace lslidar_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DevPort_Response_
{
  using Type = DevPort_Response_<ContainerAllocator>;

  explicit DevPort_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit DevPort_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    lslidar_msgs::srv::DevPort_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_msgs::srv::DevPort_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_msgs::srv::DevPort_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_msgs::srv::DevPort_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::DevPort_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::DevPort_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::DevPort_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::DevPort_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_msgs::srv::DevPort_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_msgs::srv::DevPort_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_msgs__srv__DevPort_Response
    std::shared_ptr<lslidar_msgs::srv::DevPort_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_msgs__srv__DevPort_Response
    std::shared_ptr<lslidar_msgs::srv::DevPort_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DevPort_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DevPort_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DevPort_Response_

// alias to use template instance with default allocator
using DevPort_Response =
  lslidar_msgs::srv::DevPort_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lslidar_msgs

namespace lslidar_msgs
{

namespace srv
{

struct DevPort
{
  using Request = lslidar_msgs::srv::DevPort_Request;
  using Response = lslidar_msgs::srv::DevPort_Response;
};

}  // namespace srv

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__SRV__DETAIL__DEV_PORT__STRUCT_HPP_
