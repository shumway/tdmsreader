#ifndef DATA_VALUE_H
#define DATA_VALUE_H

#include <string>

class DataType;

class DataValue {
public:
  DataValue(const DataType*);
  virtual ~DataValue() {}
private:
  const DataType *type;
};

class BoolValue : public DataValue {
public:
  BoolValue(const DataType* type, bool data);
  const bool data;
};

#endif
