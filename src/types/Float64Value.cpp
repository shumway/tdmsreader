#include "types/Float64Value.h"

Float64Value::Float64Value(const DataType* type, double data)
  : DataValue(type), data(data) {
}
