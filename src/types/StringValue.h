#ifndef STRINGVALUE_H_
#define STRINGVALUE_H_

#include "types/DataValue.h"

class StringValue : public DataValue {
public:
  StringValue(const DataType* type, const std::string &data);
  const std::string data;
};

#endif
