#include "Int8Array.h"
#include <iostream>

Int8Array::Int8Array(const DataType* type, char* data, unsigned int size) 
  : DataArray(type, size, 1), data(data) {
}
