#ifndef FLOAT64VALUE_H_
#define FLOAT64VALUE_H_

#include "types/DataValue.h"

class Float64Value : public DataValue {
public:
  Float64Value(const DataType* type, double data);
  double data;
};

#endif
