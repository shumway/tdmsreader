#include "types/StringArray.h"

StringArray::StringArray(const DataType* type, char* data,
  unsigned int size, unsigned long int nbytes)
  : DataArray(type, size, nbytes/size), data(data) {
}
