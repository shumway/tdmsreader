#include "types/UInt64Array.h"

UInt64Array::UInt64Array(const DataType* type, unsigned long long* data,
  unsigned int size)
  : DataArray(type, size, 8), data(data) {
}
