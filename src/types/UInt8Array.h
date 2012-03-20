#ifndef UINT8ARRAY_H_
#define UINT8ARRAY_H_

#include "types/DataArray.h"

class UInt8Array : public DataArray {
public:
  UInt8Array(const DataType* type, unsigned char* data, unsigned int size);
  unsigned char* data;
};
#endif
