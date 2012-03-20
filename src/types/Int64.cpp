#include "types/Int64.h"
#include "types/Int64Value.h"
#include "types/Int64Array.h"

DataValue* Int64::readValue(std::ifstream &infile) const {
  long long data;
  infile.read((char*)&data, 8);
  return new Int64Value(this,data);
}

DataArray* Int64::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  long long* data = new long long[size];
  infile.read((char*)data, 8*size);
  return new Int64Array(this, data, size);
}

DataArray* Int64::newArray(unsigned int size, unsigned int nbytes) const {
  long long* data = new long long[size];
  return new Int64Array(this, data, size);
}
