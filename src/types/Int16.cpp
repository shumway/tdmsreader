#include "types/Int16.h"
#include "types/Int16Value.h"
#include "types/Int16Array.h"

DataValue* Int16::readValue(std::ifstream &infile) const {
  short data;
  infile.read((char*)&data, 2);
  return new Int16Value(this,data);
}

DataArray* Int16::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  short* data = new short[size];
  infile.read((char*)data, 2*size);
  return new Int16Array(this, data, size);
}

DataArray* Int16::newArray(unsigned int size, unsigned int nbytes) const {
  short* data = new short[size];
  return new Int16Array(this, data, size);
}
