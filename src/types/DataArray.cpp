#include "DataArray.h"
#include <iostream>

Float64Array::Float64Array(const DataType* type, double* data,
  unsigned int size) 
  : DataArray(type, size, 8), data(data) {
}

Float128Array::Float128Array(const DataType* type, long double* data,
  unsigned int size) 
  : DataArray(type, size, 16), data(data) {
}

StringArray::StringArray(const DataType* type, char* data,
  unsigned int size, unsigned long int nbytes) 
  : DataArray(type, size, nbytes/size), data(data) {
}

BoolArray::BoolArray(const DataType* type, bool* data, unsigned int size) 
  : DataArray(type, size, 1), data(data) {
}
