#include "types/UInt32.h"
#include "types/UInt32Value.h"
#include "types/UInt32Array.h"

DataValue* UInt32::readValue(std::ifstream &infile) const {
  unsigned int data;
  infile.read((char*)&data, 4);
  return new UInt32Value(this,data);
}

DataArray* UInt32::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  unsigned int* data = new unsigned int[size];
  infile.read((char*)data, 4*size);
  return new UInt32Array(this, data, size);
}

DataArray* UInt32::newArray(unsigned int size, unsigned int nbytes) const {
  unsigned int* data = new unsigned int[size];
  return new UInt32Array(this, data, size);
}
