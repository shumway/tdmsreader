#ifndef INT64VALUE_H_
#define INT64VALUE_H_

#include "types/DataValue.h"

class Int64Value : public DataValue {
public:
  Int64Value(const DataType* type, long long data);
  long long data;
};

#endif
