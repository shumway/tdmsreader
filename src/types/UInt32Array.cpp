#include "types/UInt32Array.h"

UInt32Array::UInt32Array(const DataType* type, unsigned int* data,
  unsigned int size)
  : DataArray(type, size, 4), data(data) {
}
