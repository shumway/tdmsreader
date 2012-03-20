#ifndef UINT64ARRAY_H_
#define UINT64ARRAY_H_

#include "types/DataArray.h"

class UInt64Array : public DataArray {
public:
  UInt64Array(const DataType* type, unsigned long long* data,
    unsigned int size);
  unsigned long long* data;
};

#endif
