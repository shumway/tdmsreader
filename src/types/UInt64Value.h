#ifndef UINT64VALUE_H_
#define UINT64VALUE_H_

#include "types/DataValue.h"

class UInt64Value : public DataValue {
public:
  UInt64Value(const DataType* type, unsigned long long data);
  unsigned long long data;
};

#endif
