#include "types/Float32Array.h"

Float32Array::Float32Array(const DataType* type, float* data,
  unsigned int size)
  : DataArray(type, size, 4), data(data) {
}
