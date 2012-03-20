#include "types/Float128Value.h"

Float128Value::Float128Value(const DataType* type, long double data)
  : DataValue(type), data(data) {
}
