#include "types/StringValue.h"

StringValue::StringValue(const DataType* type, const std::string &data)
  : DataValue(type), data(data) {
}
