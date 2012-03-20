#ifndef STRINGARRAY_H_
#define STRINGARRAY_H_

#include "types/DataArray.h"

class StringArray : public DataArray {
public:
  StringArray(const DataType* type, char* data, unsigned int size,
    unsigned long int nbytes);
  char* data;
  unsigned long int nbytes;
};

#endif
