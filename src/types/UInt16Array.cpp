#include "types/UInt16Array.h"

UInt16Array::UInt16Array(const DataType* type, unsigned short* data,
  unsigned int size)
  : DataArray(type, size, 2), data(data) {
}
