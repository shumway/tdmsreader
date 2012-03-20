#include "types/UInt8Value.h"

UInt8Value::UInt8Value(const DataType* type, unsigned char data)
  : DataValue(type), data(data) {
}
