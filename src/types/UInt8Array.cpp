#include "types/UInt8Array.h"

UInt8Array::UInt8Array(const DataType* type, unsigned char* data,
  unsigned int size)
  : DataArray(type, size, 1), data(data) {
}
