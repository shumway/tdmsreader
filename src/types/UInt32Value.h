#ifndef UINT32VALUE_H_
#define UINT32VALUE_H_

#include "types/DataValue.h"

class UInt32Value : public DataValue {
public:
  UInt32Value(const DataType* type, unsigned int data);
  unsigned int data;
};

#endif
