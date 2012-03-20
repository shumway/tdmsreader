#ifndef UINT32ARRAY_H_
#define UINT32ARRAY_H_

#include "types/DataArray.h"

class UInt32Array : public DataArray {
public:
  UInt32Array(const DataType* type, unsigned int* data, unsigned int size);
  unsigned int* data;
};

#endif
