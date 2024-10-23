// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_common_interfaces:msg/SerComStruct.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_COMMON_INTERFACES__MSG__DETAIL__SER_COM_STRUCT__STRUCT_H_
#define ROBOT_COMMON_INTERFACES__MSG__DETAIL__SER_COM_STRUCT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SerComStruct in the package robot_common_interfaces.
typedef struct robot_common_interfaces__msg__SerComStruct
{
  int64_t pwm_l;
  int64_t pwm_r;
  bool is_reverse_dir_l;
  bool is_reverse_dir_r;
  bool gear;
} robot_common_interfaces__msg__SerComStruct;

// Struct for a sequence of robot_common_interfaces__msg__SerComStruct.
typedef struct robot_common_interfaces__msg__SerComStruct__Sequence
{
  robot_common_interfaces__msg__SerComStruct * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_common_interfaces__msg__SerComStruct__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_COMMON_INTERFACES__MSG__DETAIL__SER_COM_STRUCT__STRUCT_H_
