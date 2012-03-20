#ifndef INT8_H_
#define INT8_H_

#include "types/DataType.h"

class Int8 : public DataType {
  virtual DataValue* readValue(std::ifstream &infile) const;
  virtual DataArray* readArray(std::ifstream &infile, unsigned int size,
       unsigned int nbytes) const;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const;
  virtual void print(std::ostream &os) const {os << "Int8";}
};

#endif
