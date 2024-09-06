// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arm_hand_interface:msg/ArmStatus.idl
// generated code does not contain a copyright notice
#include "arm_hand_interface/msg/detail/arm_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `arm_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
arm_hand_interface__msg__ArmStatus__init(arm_hand_interface__msg__ArmStatus * msg)
{
  if (!msg) {
    return false;
  }
  // arm_no
  // time
  if (!builtin_interfaces__msg__Time__init(&msg->time)) {
    arm_hand_interface__msg__ArmStatus__fini(msg);
    return false;
  }
  // arm_pose
  if (!geometry_msgs__msg__Pose__init(&msg->arm_pose)) {
    arm_hand_interface__msg__ArmStatus__fini(msg);
    return false;
  }
  // arm_joint_angles
  // arm_motion_status
  // arm_collision_status
  // hand_angles
  // hand_forces
  return true;
}

void
arm_hand_interface__msg__ArmStatus__fini(arm_hand_interface__msg__ArmStatus * msg)
{
  if (!msg) {
    return;
  }
  // arm_no
  // time
  builtin_interfaces__msg__Time__fini(&msg->time);
  // arm_pose
  geometry_msgs__msg__Pose__fini(&msg->arm_pose);
  // arm_joint_angles
  // arm_motion_status
  // arm_collision_status
  // hand_angles
  // hand_forces
}

bool
arm_hand_interface__msg__ArmStatus__are_equal(const arm_hand_interface__msg__ArmStatus * lhs, const arm_hand_interface__msg__ArmStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arm_no
  if (lhs->arm_no != rhs->arm_no) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  // arm_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->arm_pose), &(rhs->arm_pose)))
  {
    return false;
  }
  // arm_joint_angles
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->arm_joint_angles[i] != rhs->arm_joint_angles[i]) {
      return false;
    }
  }
  // arm_motion_status
  if (lhs->arm_motion_status != rhs->arm_motion_status) {
    return false;
  }
  // arm_collision_status
  if (lhs->arm_collision_status != rhs->arm_collision_status) {
    return false;
  }
  // hand_angles
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->hand_angles[i] != rhs->hand_angles[i]) {
      return false;
    }
  }
  // hand_forces
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->hand_forces[i] != rhs->hand_forces[i]) {
      return false;
    }
  }
  return true;
}

bool
arm_hand_interface__msg__ArmStatus__copy(
  const arm_hand_interface__msg__ArmStatus * input,
  arm_hand_interface__msg__ArmStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // arm_no
  output->arm_no = input->arm_no;
  // time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  // arm_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->arm_pose), &(output->arm_pose)))
  {
    return false;
  }
  // arm_joint_angles
  for (size_t i = 0; i < 6; ++i) {
    output->arm_joint_angles[i] = input->arm_joint_angles[i];
  }
  // arm_motion_status
  output->arm_motion_status = input->arm_motion_status;
  // arm_collision_status
  output->arm_collision_status = input->arm_collision_status;
  // hand_angles
  for (size_t i = 0; i < 6; ++i) {
    output->hand_angles[i] = input->hand_angles[i];
  }
  // hand_forces
  for (size_t i = 0; i < 6; ++i) {
    output->hand_forces[i] = input->hand_forces[i];
  }
  return true;
}

arm_hand_interface__msg__ArmStatus *
arm_hand_interface__msg__ArmStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_hand_interface__msg__ArmStatus * msg = (arm_hand_interface__msg__ArmStatus *)allocator.allocate(sizeof(arm_hand_interface__msg__ArmStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arm_hand_interface__msg__ArmStatus));
  bool success = arm_hand_interface__msg__ArmStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arm_hand_interface__msg__ArmStatus__destroy(arm_hand_interface__msg__ArmStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arm_hand_interface__msg__ArmStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arm_hand_interface__msg__ArmStatus__Sequence__init(arm_hand_interface__msg__ArmStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_hand_interface__msg__ArmStatus * data = NULL;

  if (size) {
    data = (arm_hand_interface__msg__ArmStatus *)allocator.zero_allocate(size, sizeof(arm_hand_interface__msg__ArmStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arm_hand_interface__msg__ArmStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arm_hand_interface__msg__ArmStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arm_hand_interface__msg__ArmStatus__Sequence__fini(arm_hand_interface__msg__ArmStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arm_hand_interface__msg__ArmStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arm_hand_interface__msg__ArmStatus__Sequence *
arm_hand_interface__msg__ArmStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_hand_interface__msg__ArmStatus__Sequence * array = (arm_hand_interface__msg__ArmStatus__Sequence *)allocator.allocate(sizeof(arm_hand_interface__msg__ArmStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arm_hand_interface__msg__ArmStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arm_hand_interface__msg__ArmStatus__Sequence__destroy(arm_hand_interface__msg__ArmStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arm_hand_interface__msg__ArmStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arm_hand_interface__msg__ArmStatus__Sequence__are_equal(const arm_hand_interface__msg__ArmStatus__Sequence * lhs, const arm_hand_interface__msg__ArmStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arm_hand_interface__msg__ArmStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arm_hand_interface__msg__ArmStatus__Sequence__copy(
  const arm_hand_interface__msg__ArmStatus__Sequence * input,
  arm_hand_interface__msg__ArmStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arm_hand_interface__msg__ArmStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arm_hand_interface__msg__ArmStatus * data =
      (arm_hand_interface__msg__ArmStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arm_hand_interface__msg__ArmStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arm_hand_interface__msg__ArmStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arm_hand_interface__msg__ArmStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
