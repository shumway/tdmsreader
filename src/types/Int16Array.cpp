#include "types/Int16Array.h"

Int16Array::Int16Array(const DataType* type, short* data, unsigned int size)
  : DataArray(type, size, 2, data) {
}
