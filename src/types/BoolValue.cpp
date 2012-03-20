#include "types/BoolValue.h"

BoolValue::BoolValue(const DataType* type, bool data)
  : DataValue(type), data(data) {
}
