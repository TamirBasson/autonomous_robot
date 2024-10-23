// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_common_interfaces:msg/SerComStruct.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_common_interfaces/msg/detail/ser_com_struct__rosidl_typesupport_introspection_c.h"
#include "robot_common_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_common_interfaces/msg/detail/ser_com_struct__functions.h"
#include "robot_common_interfaces/msg/detail/ser_com_struct__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robot_common_interfaces__msg__SerComStruct__rosidl_typesupport_introspection_c__SerComStruct_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_common_interfaces__msg__SerComStruct__init(message_memory);
}

void robot_common_interfaces__msg__SerComStruct__rosidl_typesupport_introspection_c__SerComStruct_fini_function(void * message_memory)
{
  robot_common_interfaces__msg__SerComStruct__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_common_interfaces__msg__SerComStruct__rosidl_typesupport_introspection_c__SerComStruct_message_member_array[5] = {
  {
    "pwm_l",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_common_interfaces__msg__SerComStruct, pwm_l),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm_r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_common_interfaces__msg__SerComStruct, pwm_r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_reverse_dir_l",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_common_interfaces__msg__SerComStruct, is_reverse_dir_l),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_reverse_dir_r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_common_interfaces__msg__SerComStruct, is_reverse_dir_r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_common_interfaces__msg__SerComStruct, gear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_common_interfaces__msg__SerComStruct__rosidl_typesupport_introspection_c__SerComStruct_message_members = {
  "robot_common_interfaces__msg",  // message namespace
  "SerComStruct",  // message name
  5,  // number of fields
  sizeof(robot_common_interfaces__msg__SerComStruct),
  robot_common_interfaces__msg__SerComStruct__rosidl_typesupport_introspection_c__SerComStruct_message_member_array,  // message members
  robot_common_interfaces__msg__SerComStruct__rosidl_typesupport_introspection_c__SerComStruct_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_common_interfaces__msg__SerComStruct__rosidl_typesupport_introspection_c__SerComStruct_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_common_interfaces__msg__SerComStruct__rosidl_typesupport_introspection_c__SerComStruct_message_type_support_handle = {
  0,
  &robot_common_interfaces__msg__SerComStruct__rosidl_typesupport_introspection_c__SerComStruct_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_common_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_common_interfaces, msg, SerComStruct)() {
  if (!robot_common_interfaces__msg__SerComStruct__rosidl_typesupport_introspection_c__SerComStruct_message_type_support_handle.typesupport_identifier) {
    robot_common_interfaces__msg__SerComStruct__rosidl_typesupport_introspection_c__SerComStruct_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_common_interfaces__msg__SerComStruct__rosidl_typesupport_introspection_c__SerComStruct_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
