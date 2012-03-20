#include "DataValue.h"

DataValue::DataValue(const DataType*) : type(type) {}

BoolValue::BoolValue(const DataType* type, bool data) 
  : DataValue(type), data(data) {
}
