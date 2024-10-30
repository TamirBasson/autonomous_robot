// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lslidar_msgs:srv/DataPort.idl
// generated code does not contain a copyright notice
#include "lslidar_msgs/srv/detail/data_port__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lslidar_msgs/srv/detail/data_port__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace lslidar_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
cdr_serialize(
  const lslidar_msgs::srv::DataPort_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: data_port
  cdr << ros_message.data_port;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lslidar_msgs::srv::DataPort_Request & ros_message)
{
  // Member: data_port
  cdr >> ros_message.data_port;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
get_serialized_size(
  const lslidar_msgs::srv::DataPort_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: data_port
  {
    size_t item_size = sizeof(ros_message.data_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
max_serialized_size_DataPort_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: data_port
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lslidar_msgs::srv::DataPort_Request;
    is_plain =
      (
      offsetof(DataType, data_port) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DataPort_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lslidar_msgs::srv::DataPort_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DataPort_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lslidar_msgs::srv::DataPort_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DataPort_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lslidar_msgs::srv::DataPort_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DataPort_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DataPort_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DataPort_Request__callbacks = {
  "lslidar_msgs::srv",
  "DataPort_Request",
  _DataPort_Request__cdr_serialize,
  _DataPort_Request__cdr_deserialize,
  _DataPort_Request__get_serialized_size,
  _DataPort_Request__max_serialized_size
};

static rosidl_message_type_support_t _DataPort_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DataPort_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace lslidar_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lslidar_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<lslidar_msgs::srv::DataPort_Request>()
{
  return &lslidar_msgs::srv::typesupport_fastrtps_cpp::_DataPort_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lslidar_msgs, srv, DataPort_Request)() {
  return &lslidar_msgs::srv::typesupport_fastrtps_cpp::_DataPort_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace lslidar_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
cdr_serialize(
  const lslidar_msgs::srv::DataPort_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result
  cdr << (ros_message.result ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lslidar_msgs::srv::DataPort_Response & ros_message)
{
  // Member: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.result = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
get_serialized_size(
  const lslidar_msgs::srv::DataPort_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result
  {
    size_t item_size = sizeof(ros_message.result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
max_serialized_size_DataPort_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lslidar_msgs::srv::DataPort_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DataPort_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lslidar_msgs::srv::DataPort_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DataPort_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lslidar_msgs::srv::DataPort_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DataPort_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lslidar_msgs::srv::DataPort_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DataPort_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DataPort_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DataPort_Response__callbacks = {
  "lslidar_msgs::srv",
  "DataPort_Response",
  _DataPort_Response__cdr_serialize,
  _DataPort_Response__cdr_deserialize,
  _DataPort_Response__get_serialized_size,
  _DataPort_Response__max_serialized_size
};

static rosidl_message_type_support_t _DataPort_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DataPort_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace lslidar_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lslidar_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<lslidar_msgs::srv::DataPort_Response>()
{
  return &lslidar_msgs::srv::typesupport_fastrtps_cpp::_DataPort_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lslidar_msgs, srv, DataPort_Response)() {
  return &lslidar_msgs::srv::typesupport_fastrtps_cpp::_DataPort_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace lslidar_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _DataPort__callbacks = {
  "lslidar_msgs::srv",
  "DataPort",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lslidar_msgs, srv, DataPort_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lslidar_msgs, srv, DataPort_Response)(),
};

static rosidl_service_type_support_t _DataPort__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DataPort__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace lslidar_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lslidar_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<lslidar_msgs::srv::DataPort>()
{
  return &lslidar_msgs::srv::typesupport_fastrtps_cpp::_DataPort__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lslidar_msgs, srv, DataPort)() {
  return &lslidar_msgs::srv::typesupport_fastrtps_cpp::_DataPort__handle;
}

#ifdef __cplusplus
}
#endif
