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

class Int16Value : public DataValue {
public:
  Int16Value(const DataType* type, short data);
  short data;
};

class Int32Value : public DataValue {
public:
  Int32Value(const DataType* type, int data) ;
  int data;
};

class Int64Value : public DataValue {
public:
  Int64Value(const DataType* type, long long data);
  long long data;
};

class UInt8Value : public DataValue {
public:
  UInt8Value(const DataType* type, unsigned char data);
  unsigned char data;
};

class UInt16Value : public DataValue {
public:
  UInt16Value(const DataType* type, unsigned short data);
  unsigned short data;
};

class UInt32Value : public DataValue {
public:
  UInt32Value(const DataType* type, unsigned int data);
  unsigned int data;
};

class UInt64Value : public DataValue {
public:
  UInt64Value(const DataType* type, unsigned long long data);
  unsigned long long data;
};

class Float32Value : public DataValue {
public:
  Float32Value(const DataType* type, float data);
  float data;
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
