#include "types/Int64Array.h"

Int64Array::Int64Array(const DataType* type, long long* data,
  unsigned int size)
  : DataArray(type, size, 8), data(data) {
}
