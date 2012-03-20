#include "Int8Value.h"

Int8Value::Int8Value(const DataType* type, char data) 
  : DataValue(type), data(data) {
}
