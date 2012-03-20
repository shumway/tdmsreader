#include "types/UInt16Value.h"

UInt16Value::UInt16Value(const DataType* type, unsigned short data)
  : DataValue(type), data(data) {
}
