// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lslidar_msgs:srv/LslidarControl.idl
// generated code does not contain a copyright notice
#include "lslidar_msgs/srv/detail/lslidar_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lslidar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lslidar_msgs/srv/detail/lslidar_control__struct.h"
#include "lslidar_msgs/srv/detail/lslidar_control__functions.h"
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


// forward declare type support functions


using _LslidarControl_Request__ros_msg_type = lslidar_msgs__srv__LslidarControl_Request;

static bool _LslidarControl_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LslidarControl_Request__ros_msg_type * ros_message = static_cast<const _LslidarControl_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: laser_control
  {
    cdr << ros_message->laser_control;
  }

  return true;
}

static bool _LslidarControl_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LslidarControl_Request__ros_msg_type * ros_message = static_cast<_LslidarControl_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: laser_control
  {
    cdr >> ros_message->laser_control;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_msgs
size_t get_serialized_size_lslidar_msgs__srv__LslidarControl_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LslidarControl_Request__ros_msg_type * ros_message = static_cast<const _LslidarControl_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name laser_control
  {
    size_t item_size = sizeof(ros_message->laser_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LslidarControl_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lslidar_msgs__srv__LslidarControl_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_msgs
size_t max_serialized_size_lslidar_msgs__srv__LslidarControl_Request(
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

  // member: laser_control
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
    using DataType = lslidar_msgs__srv__LslidarControl_Request;
    is_plain =
      (
      offsetof(DataType, laser_control) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LslidarControl_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lslidar_msgs__srv__LslidarControl_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LslidarControl_Request = {
  "lslidar_msgs::srv",
  "LslidarControl_Request",
  _LslidarControl_Request__cdr_serialize,
  _LslidarControl_Request__cdr_deserialize,
  _LslidarControl_Request__get_serialized_size,
  _LslidarControl_Request__max_serialized_size
};

static rosidl_message_type_support_t _LslidarControl_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LslidarControl_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_msgs, srv, LslidarControl_Request)() {
  return &_LslidarControl_Request__type_support;
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
// #include "lslidar_msgs/srv/detail/lslidar_control__struct.h"
// already included above
// #include "lslidar_msgs/srv/detail/lslidar_control__functions.h"
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


using _LslidarControl_Response__ros_msg_type = lslidar_msgs__srv__LslidarControl_Response;

static bool _LslidarControl_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LslidarControl_Response__ros_msg_type * ros_message = static_cast<const _LslidarControl_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  return true;
}

static bool _LslidarControl_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LslidarControl_Response__ros_msg_type * ros_message = static_cast<_LslidarControl_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_msgs
size_t get_serialized_size_lslidar_msgs__srv__LslidarControl_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LslidarControl_Response__ros_msg_type * ros_message = static_cast<const _LslidarControl_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _LslidarControl_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lslidar_msgs__srv__LslidarControl_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_msgs
size_t max_serialized_size_lslidar_msgs__srv__LslidarControl_Response(
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
    using DataType = lslidar_msgs__srv__LslidarControl_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LslidarControl_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lslidar_msgs__srv__LslidarControl_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LslidarControl_Response = {
  "lslidar_msgs::srv",
  "LslidarControl_Response",
  _LslidarControl_Response__cdr_serialize,
  _LslidarControl_Response__cdr_deserialize,
  _LslidarControl_Response__get_serialized_size,
  _LslidarControl_Response__max_serialized_size
};

static rosidl_message_type_support_t _LslidarControl_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LslidarControl_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_msgs, srv, LslidarControl_Response)() {
  return &_LslidarControl_Response__type_support;
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
#include "lslidar_msgs/srv/lslidar_control.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LslidarControl__callbacks = {
  "lslidar_msgs::srv",
  "LslidarControl",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_msgs, srv, LslidarControl_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_msgs, srv, LslidarControl_Response)(),
};

static rosidl_service_type_support_t LslidarControl__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &LslidarControl__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_msgs, srv, LslidarControl)() {
  return &LslidarControl__handle;
}

#if defined(__cplusplus)
}
#endif
