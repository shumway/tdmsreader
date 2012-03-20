#ifndef FLOAT64ARRAY_H_
#define FLOAT64ARRAY_H_

#include "types/DataArray.h"

class Float64Array : public DataArray {
public:
  Float64Array(const DataType* type, double* data, unsigned int size);
  double* data;
};

#endif
