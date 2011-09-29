#include "DataValue.h"

DataValue::DataValue(const DataType*) : type(type) {}

DataValue::~DataValue() {}

Int8Value::Int8Value(const DataType* type, char data) 
  : DataValue(type), data(data) {
}

Int16Value::Int16Value(const DataType* type, short data) 
  : DataValue(type), data(data) {
}

Int32Value::Int32Value(const DataType* type, int data) 
  : DataValue(type), data(data) {
}

Int64Value::Int64Value(const DataType* type, long long data) 
  : DataValue(type), data(data) {
}

UInt8Value::UInt8Value(const DataType* type, unsigned char data) 
  : DataValue(type), data(data) {
}

UInt16Value::UInt16Value(const DataType* type, unsigned short data) 
  : DataValue(type), data(data) {
}

UInt32Value::UInt32Value(const DataType* type, unsigned int data) 
  : DataValue(type), data(data) {
}

UInt64Value::UInt64Value(const DataType* type, unsigned long long data) 
  : DataValue(type), data(data) {
}

Float32Value::Float32Value(const DataType* type, float data)
  : DataValue(type), data(data) {
}

Float64Value::Float64Value(const DataType* type, double data)
  : DataValue(type), data(data) {
}

Float128Value::Float128Value(const DataType* type, long double data)
  : DataValue(type), data(data) {
}

StringValue::StringValue(const DataType* type, const std::string &data) 
  : DataValue(type), data(data) {
}

BoolValue::BoolValue(const DataType* type, bool data) 
  : DataValue(type), data(data) {
}
