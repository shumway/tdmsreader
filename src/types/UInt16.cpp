#include "types/UInt16.h"
#include "types/UInt16Array.h"
#include "types/UInt16Value.h"

DataValue* UInt16::readValue(std::ifstream &infile) const {
  unsigned short data;
  infile.read((char*)&data, 2);
  return new UInt16Value(this,data);
}

DataArray* UInt16::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  unsigned short* data = new unsigned short[size];
  infile.read((char*)data, 2*size);
  return new UInt16Array(this, data, size);
}

DataArray* UInt16::newArray(unsigned int size, unsigned int nbytes) const {
  unsigned short* data = new unsigned short[size];
  return new UInt16Array(this, data, size);
}
