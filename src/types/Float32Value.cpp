#include "types/Float32Value.h"

Float32Value::Float32Value(const DataType* type, float data)
  : DataValue(type), data(data) {
}
