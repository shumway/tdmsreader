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

class Float64Value : public DataValue {
public:
  Float64Value(const DataType* type, double data);
  double data;
};

class Float128Value : public DataValue {
public:
  Float128Value(const DataType* type, long double data);
  long double data;
};

class StringValue : public DataValue {
public:
  StringValue(const DataType* type, const std::string &data);
  const std::string data;
};

class BoolValue : public DataValue {
public:
  BoolValue(const DataType* type, bool data);
  const bool data;
};

#endif
