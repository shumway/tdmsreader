#ifndef FLOAT128VALUE_H_
#define FLOAT128VALUE_H_

#include "types/DataValue.h"

class Float128Value : public DataValue {
public:
  Float128Value(const DataType* type, long double data);
  long double data;
};

#endif
