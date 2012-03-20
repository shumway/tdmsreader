#include "types/BoolArray.h"

BoolArray::BoolArray(const DataType* type, bool* data, unsigned int size)
  : DataArray(type, size, 1), data(data) {
}
