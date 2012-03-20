#include "Int32Value.h"

Int32Value::Int32Value(const DataType* type, int data)
  : DataValue(type), data(data) {
}
