#ifndef INT32VALUE_H_
#define INT32VALUE_H_

#include "types/DataValue.h"

class Int32Value : public DataValue {
public:
  Int32Value(const DataType* type, int data) ;
  int data;
};

#endif
