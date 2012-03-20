#ifndef FLOAT128ARRAY_H_
#define FLOAT128ARRAY_H_

#include "types/DataArray.h"

class Float128Array : public DataArray {
public:
  Float128Array(const DataType* type, long double* data, unsigned int size);
  long double* data;
};

#endif
