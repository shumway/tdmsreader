#ifndef INT64ARRAY_H_
#define INT64ARRAY_H_

#include "types/DataArray.h"

class Int64Array : public DataArray {
public:
  Int64Array(const DataType* type, long long* data, unsigned int size);
  long long* data;
};
#endif
