#ifndef INT8_TYPE_H_
#define INT8_TYPE_H_

#include <iostream>
#include <string>
#include <fstream>
#include <map>

#include "DataType.h"

class Int8Type : public DataType {
  virtual DataValue* readValue(std::ifstream &infile) const;
  virtual DataArray* readArray(std::ifstream &infile, unsigned int size,
       unsigned int nbytes) const;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const;
  virtual void print(std::ostream &os) const {os << "Int8";}
};

#endif
