#ifndef INT16ARRAY_H_
#define INT16ARRAY_H_

#include "types/DataArray.h"

class Int16Array : public DataArray {
public:
  Int16Array(const DataType* type, short* data, unsigned int size);
};

#endif
