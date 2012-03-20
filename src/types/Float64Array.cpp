#include "types/Float64Array.h"

Float64Array::Float64Array(const DataType* type, double* data,
  unsigned int size)
  : DataArray(type, size, 8), data(data) {
}
