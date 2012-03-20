#include "types/Int32Array.h"

Int32Array::Int32Array(const DataType* type, int* data, unsigned int size)
  : DataArray(type, size, 4), data(data) {
}
