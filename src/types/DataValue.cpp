#include "DataValue.h"

DataValue::DataValue(const DataType*) : type(type) {}

StringValue::StringValue(const DataType* type, const std::string &data) 
  : DataValue(type), data(data) {
}

BoolValue::BoolValue(const DataType* type, bool data) 
  : DataValue(type), data(data) {
}
