#include "types/UInt64.h"
#include "types/UInt64Array.h"
#include "types/UInt64Value.h"

DataValue* UInt64::readValue(std::ifstream &infile) const {
  unsigned long long data;
  infile.read((char*)&data, 8);
  return new UInt64Value(this,data);
}

DataArray* UInt64::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  unsigned long long* data = new unsigned long long[size];
  infile.read((char*)data, 8*size);
  return new UInt64Array(this, data, size);
}

DataArray* UInt64::newArray(unsigned int size, unsigned int nbytes) const {
  unsigned long long* data = new unsigned long long[size];
  return new UInt64Array(this, data, size);
}
