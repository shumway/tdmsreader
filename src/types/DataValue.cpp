#include "DataValue.h"

DataValue::DataValue(const DataType*) : type(type) {}

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
