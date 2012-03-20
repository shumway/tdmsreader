#ifndef BOOLARRAY_H_
#define BOOLARRAY_H_

#include "types/DataArray.h"

class BoolArray : public DataArray {
public:
  BoolArray(const DataType* type, bool* data, unsigned int size);
  bool* data;
};

#endif
