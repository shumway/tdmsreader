#ifndef UINT8_H_
#define UINT8_H_

#include "types/DataType.h"

class UInt8 : public DataType {
  virtual DataValue* readValue(std::ifstream &infile) const;
  virtual DataArray* readArray(std::ifstream &infile, unsigned int size,
      unsigned int nbytes) const;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const;
  virtual void print(std::ostream &os) const {os << "UInt8";}
};
#endif
