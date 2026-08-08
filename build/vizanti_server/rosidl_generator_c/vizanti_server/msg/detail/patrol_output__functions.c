// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vizanti_server:msg/PatrolOutput.idl
// generated code does not contain a copyright notice
#include "vizanti_server/msg/detail/patrol_output__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
vizanti_server__msg__PatrolOutput__init(vizanti_server__msg__PatrolOutput * msg)
{
  if (!msg) {
    return false;
  }
  // patrol_status
  // route_id
  return true;
}

void
vizanti_server__msg__PatrolOutput__fini(vizanti_server__msg__PatrolOutput * msg)
{
  if (!msg) {
    return;
  }
  // patrol_status
  // route_id
}

bool
vizanti_server__msg__PatrolOutput__are_equal(const vizanti_server__msg__PatrolOutput * lhs, const vizanti_server__msg__PatrolOutput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // patrol_status
  if (lhs->patrol_status != rhs->patrol_status) {
    return false;
  }
  // route_id
  if (lhs->route_id != rhs->route_id) {
    return false;
  }
  return true;
}

bool
vizanti_server__msg__PatrolOutput__copy(
  const vizanti_server__msg__PatrolOutput * input,
  vizanti_server__msg__PatrolOutput * output)
{
  if (!input || !output) {
    return false;
  }
  // patrol_status
  output->patrol_status = input->patrol_status;
  // route_id
  output->route_id = input->route_id;
  return true;
}

vizanti_server__msg__PatrolOutput *
vizanti_server__msg__PatrolOutput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_server__msg__PatrolOutput * msg = (vizanti_server__msg__PatrolOutput *)allocator.allocate(sizeof(vizanti_server__msg__PatrolOutput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vizanti_server__msg__PatrolOutput));
  bool success = vizanti_server__msg__PatrolOutput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vizanti_server__msg__PatrolOutput__destroy(vizanti_server__msg__PatrolOutput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vizanti_server__msg__PatrolOutput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vizanti_server__msg__PatrolOutput__Sequence__init(vizanti_server__msg__PatrolOutput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_server__msg__PatrolOutput * data = NULL;

  if (size) {
    data = (vizanti_server__msg__PatrolOutput *)allocator.zero_allocate(size, sizeof(vizanti_server__msg__PatrolOutput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vizanti_server__msg__PatrolOutput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vizanti_server__msg__PatrolOutput__fini(&data[i - 1]);
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
vizanti_server__msg__PatrolOutput__Sequence__fini(vizanti_server__msg__PatrolOutput__Sequence * array)
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
      vizanti_server__msg__PatrolOutput__fini(&array->data[i]);
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

vizanti_server__msg__PatrolOutput__Sequence *
vizanti_server__msg__PatrolOutput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_server__msg__PatrolOutput__Sequence * array = (vizanti_server__msg__PatrolOutput__Sequence *)allocator.allocate(sizeof(vizanti_server__msg__PatrolOutput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vizanti_server__msg__PatrolOutput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vizanti_server__msg__PatrolOutput__Sequence__destroy(vizanti_server__msg__PatrolOutput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vizanti_server__msg__PatrolOutput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vizanti_server__msg__PatrolOutput__Sequence__are_equal(const vizanti_server__msg__PatrolOutput__Sequence * lhs, const vizanti_server__msg__PatrolOutput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vizanti_server__msg__PatrolOutput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vizanti_server__msg__PatrolOutput__Sequence__copy(
  const vizanti_server__msg__PatrolOutput__Sequence * input,
  vizanti_server__msg__PatrolOutput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vizanti_server__msg__PatrolOutput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vizanti_server__msg__PatrolOutput * data =
      (vizanti_server__msg__PatrolOutput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vizanti_server__msg__PatrolOutput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vizanti_server__msg__PatrolOutput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vizanti_server__msg__PatrolOutput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
