#include "types/Int64Value.h"

Int64Value::Int64Value(const DataType* type, long long data)
  : DataValue(type), data(data) {
}
