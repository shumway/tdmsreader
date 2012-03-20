#ifndef UINT8VALUE_H_
#define UINT8VALUE_H_

#include "types/DataValue.h"

class UInt8Value : public DataValue {
public:
  UInt8Value(const DataType* type, unsigned char data);
  unsigned char data;
};

#endif
