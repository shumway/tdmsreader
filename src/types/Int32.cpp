#include "types/Int32.h"
#include "types/Int32Value.h"
#include "types/Int32Array.h"

DataValue* Int32::readValue(std::ifstream &infile) const {
  int data;
  infile.read((char*)&data, 4);
  return new Int32Value(this,data);
}

DataArray* Int32::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  int* data = new int[size];
  infile.read((char*)data, 4*size);
  return new Int32Array(this, data, size);
}

DataArray* Int32::newArray(unsigned int size, unsigned int nbytes) const {
  int* data = new int[size];
  return new Int32Array(this, data, size);
}
