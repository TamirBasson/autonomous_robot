// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_msgs:srv/DataPort.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__DATA_PORT__BUILDER_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__DATA_PORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_msgs/srv/detail/data_port__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_DataPort_Request_data_port
{
public:
  Init_DataPort_Request_data_port()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::DataPort_Request data_port(::lslidar_msgs::srv::DataPort_Request::_data_port_type arg)
  {
    msg_.data_port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::DataPort_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::DataPort_Request>()
{
  return lslidar_msgs::srv::builder::Init_DataPort_Request_data_port();
}

}  // namespace lslidar_msgs


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_DataPort_Response_result
{
public:
  Init_DataPort_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::DataPort_Response result(::lslidar_msgs::srv::DataPort_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::DataPort_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::DataPort_Response>()
{
  return lslidar_msgs::srv::builder::Init_DataPort_Response_result();
}

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__SRV__DETAIL__DATA_PORT__BUILDER_HPP_
