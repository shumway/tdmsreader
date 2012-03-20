#ifndef BOOLVALUE_H_
#define BOOLVALUE_H_

#include "types/DataValue.h"

class BoolValue : public DataValue {
public:
  BoolValue(const DataType* type, bool data);
  const bool data;
};

#endif
