#include "types/UInt32Value.h"

UInt32Value::UInt32Value(const DataType* type, unsigned int data)
  : DataValue(type), data(data) {
}
