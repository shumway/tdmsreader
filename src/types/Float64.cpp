#include "types/Float64.h"
#include "types/Float64Value.h"
#include "types/Float64Array.h"

DataValue* Float64::readValue(std::ifstream &infile) const {
  double data;
  infile.read((char*)&data, 8);
  return new Float64Value(this,data);
}

DataArray* Float64::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  double* data = new double[size];
  infile.read((char*)data, 4*size);
  return new Float64Array(this, data, size);
}

DataArray* Float64::newArray(unsigned int size, unsigned int nbytes) const {
  double* data = new double[size];
  return new Float64Array(this, data, size);
}
