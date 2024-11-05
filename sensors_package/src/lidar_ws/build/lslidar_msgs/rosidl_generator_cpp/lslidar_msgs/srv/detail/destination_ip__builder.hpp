// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_msgs:srv/DestinationIp.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__DESTINATION_IP__BUILDER_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__DESTINATION_IP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_msgs/srv/detail/destination_ip__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_DestinationIp_Request_destination_ip
{
public:
  Init_DestinationIp_Request_destination_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::DestinationIp_Request destination_ip(::lslidar_msgs::srv::DestinationIp_Request::_destination_ip_type arg)
  {
    msg_.destination_ip = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::DestinationIp_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::DestinationIp_Request>()
{
  return lslidar_msgs::srv::builder::Init_DestinationIp_Request_destination_ip();
}

}  // namespace lslidar_msgs


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_DestinationIp_Response_result
{
public:
  Init_DestinationIp_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::DestinationIp_Response result(::lslidar_msgs::srv::DestinationIp_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::DestinationIp_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::DestinationIp_Response>()
{
  return lslidar_msgs::srv::builder::Init_DestinationIp_Response_result();
}

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__SRV__DETAIL__DESTINATION_IP__BUILDER_HPP_
