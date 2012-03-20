#ifndef FLOAT32ARRAY_H_
#define FLOAT32ARRAY_H_

#include "types/DataArray.h"

class Float32Array : public DataArray {
public:
  Float32Array(const DataType* type, float* data, unsigned int size);
  float* data;
};

#endif
