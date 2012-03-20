#ifndef UINTVALUE_H_
#define UINTVALUE_H_

#include "types/DataValue.h"

class UInt16Value : public DataValue {
public:
  UInt16Value(const DataType* type, unsigned short data);
  unsigned short data;
};

#endif
