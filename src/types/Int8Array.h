#ifndef INT8ARRAY_H_
#define INT8ARRAY_H_

#include "types/DataArray.h"

class Int8Array : public DataArray {
public:
  Int8Array(const DataType* type, char* data, unsigned int size);
  char* data;
};

#endif
