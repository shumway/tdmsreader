#ifndef FLOAT32VALUE_H_
#define FLOAT32VALUE_H_

#include "types/DataValue.h"

class Float32Value : public DataValue {
public:
  Float32Value(const DataType* type, float data);
  float data;
};

#endif
