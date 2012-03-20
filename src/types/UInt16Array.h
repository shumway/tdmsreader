#ifndef UINT16ARRAY_H_
#define UINT16ARRAY_H_

#include "types/DataArray.h"

class UInt16Array : public DataArray {
public:
  UInt16Array(const DataType* type, unsigned short* data, unsigned int size);
  unsigned short* data;
};

#endif
