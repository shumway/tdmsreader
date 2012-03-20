#ifndef INT8VALUE_H_
#define INT8VALUE_H_

#include "types/DataValue.h"
class DataType;

class Int8Value : public DataValue {
public:
  Int8Value(const DataType* type, char data);
  char data;
};

#endif
