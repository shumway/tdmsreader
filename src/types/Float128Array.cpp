#include "types/Float128Array.h"

Float128Array::Float128Array(const DataType* type, long double* data,
  unsigned int size)
  : DataArray(type, size, 16), data(data) {
}
