#include "DataArray.h"
#include <iostream>

StringArray::StringArray(const DataType* type, char* data,
  unsigned int size, unsigned long int nbytes) 
  : DataArray(type, size, nbytes/size), data(data) {
}

BoolArray::BoolArray(const DataType* type, bool* data, unsigned int size) 
  : DataArray(type, size, 1), data(data) {
}
