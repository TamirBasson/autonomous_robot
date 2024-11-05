// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lslidar_msgs:srv/DestinationIp.idl
// generated code does not contain a copyright notice
#include "lslidar_msgs/srv/detail/destination_ip__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lslidar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lslidar_msgs/srv/detail/destination_ip__struct.h"
#include "lslidar_msgs/srv/detail/destination_ip__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // destination_ip
#include "rosidl_runtime_c/string_functions.h"  // destination_ip

// forward declare type support functions


using _DestinationIp_Request__ros_msg_type = lslidar_msgs__srv__DestinationIp_Request;

static bool _DestinationIp_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DestinationIp_Request__ros_msg_type * ros_message = static_cast<const _DestinationIp_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: destination_ip
  {
    const rosidl_runtime_c__String * str = &ros_message->destination_ip;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _DestinationIp_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DestinationIp_Request__ros_msg_type * ros_message = static_cast<_DestinationIp_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: destination_ip
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->destination_ip.data) {
      rosidl_runtime_c__String__init(&ros_message->destination_ip);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->destination_ip,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'destination_ip'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_msgs
size_t get_serialized_size_lslidar_msgs__srv__DestinationIp_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DestinationIp_Request__ros_msg_type * ros_message = static_cast<const _DestinationIp_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name destination_ip
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->destination_ip.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _DestinationIp_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lslidar_msgs__srv__DestinationIp_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_msgs
size_t max_serialized_size_lslidar_msgs__srv__DestinationIp_Request(
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

  // member: destination_ip
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lslidar_msgs__srv__DestinationIp_Request;
    is_plain =
      (
      offsetof(DataType, destination_ip) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DestinationIp_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lslidar_msgs__srv__DestinationIp_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DestinationIp_Request = {
  "lslidar_msgs::srv",
  "DestinationIp_Request",
  _DestinationIp_Request__cdr_serialize,
  _DestinationIp_Request__cdr_deserialize,
  _DestinationIp_Request__get_serialized_size,
  _DestinationIp_Request__max_serialized_size
};

static rosidl_message_type_support_t _DestinationIp_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DestinationIp_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_msgs, srv, DestinationIp_Request)() {
  return &_DestinationIp_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "lslidar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "lslidar_msgs/srv/detail/destination_ip__struct.h"
// already included above
// #include "lslidar_msgs/srv/detail/destination_ip__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DestinationIp_Response__ros_msg_type = lslidar_msgs__srv__DestinationIp_Response;

static bool _DestinationIp_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DestinationIp_Response__ros_msg_type * ros_message = static_cast<const _DestinationIp_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  return true;
}

static bool _DestinationIp_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DestinationIp_Response__ros_msg_type * ros_message = static_cast<_DestinationIp_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_msgs
size_t get_serialized_size_lslidar_msgs__srv__DestinationIp_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DestinationIp_Response__ros_msg_type * ros_message = static_cast<const _DestinationIp_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DestinationIp_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lslidar_msgs__srv__DestinationIp_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_msgs
size_t max_serialized_size_lslidar_msgs__srv__DestinationIp_Response(
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

  // member: result
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
    using DataType = lslidar_msgs__srv__DestinationIp_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DestinationIp_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lslidar_msgs__srv__DestinationIp_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DestinationIp_Response = {
  "lslidar_msgs::srv",
  "DestinationIp_Response",
  _DestinationIp_Response__cdr_serialize,
  _DestinationIp_Response__cdr_deserialize,
  _DestinationIp_Response__get_serialized_size,
  _DestinationIp_Response__max_serialized_size
};

static rosidl_message_type_support_t _DestinationIp_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DestinationIp_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_msgs, srv, DestinationIp_Response)() {
  return &_DestinationIp_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "lslidar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lslidar_msgs/srv/destination_ip.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DestinationIp__callbacks = {
  "lslidar_msgs::srv",
  "DestinationIp",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_msgs, srv, DestinationIp_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_msgs, srv, DestinationIp_Response)(),
};

static rosidl_service_type_support_t DestinationIp__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &DestinationIp__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_msgs, srv, DestinationIp)() {
  return &DestinationIp__handle;
}

#if defined(__cplusplus)
}
#endif
