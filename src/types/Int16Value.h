#ifndef INT16VALUE_H_
#define INT16VALUE_H_

#include "types/DataValue.h"

class Int16Value : public DataValue {
public:
  Int16Value(const DataType* type, short data);
  short data;
};

#endif
