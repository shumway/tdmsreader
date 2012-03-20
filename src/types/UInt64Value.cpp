#include "types/UInt64Value.h"

UInt64Value::UInt64Value(const DataType* type, unsigned long long data)
  : DataValue(type), data(data) {
}
