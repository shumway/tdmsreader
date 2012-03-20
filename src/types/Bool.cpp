#include "types/Bool.h"
#include "types/BoolArray.h"
#include "types/BoolValue.h"

DataValue* Bool::readValue(std::ifstream &infile) const {
  bool data;
  infile.read((char*)&data, 1);
  return new BoolValue(this,data);
}

DataArray* Bool::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  bool* data = new bool[size];
  infile.read((char*)data, size);
  return new BoolArray(this, data, size);
}

DataArray* Bool::newArray(unsigned int size, unsigned int nbytes) const {
  bool* data = new bool[size];
  return new BoolArray(this, data, size);
}
