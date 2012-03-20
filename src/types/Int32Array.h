#ifndef INT32ARRAY_H_
#define INT32ARRAY_H_

#include "DataArray.h"

class Int32Array : public DataArray {
public:
  Int32Array(const DataType* type, int* data, unsigned int size);
  int* data;
};

#endif
