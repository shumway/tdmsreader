#include "types/Int16Value.h"

Int16Value::Int16Value(const DataType* type, short data)
  : DataValue(type), data(data) {
}
