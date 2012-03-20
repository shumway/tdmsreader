#include "types/Float128.h"
#include "types/Float128Array.h"
#include "types/Float128Value.h"

DataValue* Float128::readValue(std::ifstream &infile) const {
  long double data;
  infile.read((char*)&data, 8);
  return new Float128Value(this,data);
}

DataArray* Float128::readArray(std::ifstream &infile,
    unsigned int size, unsigned int nbytes) const {
  long double* data = new long double[size];
  infile.read((char*)data, 4*size);
  return new Float128Array(this, data, size);
}

DataArray* Float128::newArray(unsigned int size, unsigned int nbytes) const {
  long double* data = new long double[size];
  return new Float128Array(this, data, size);
}
