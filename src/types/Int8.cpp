#include "types/Int8.h"
#include "types/Int8Value.h"
#include "types/Int8Array.h"
#include <fstream>


DataValue* Int8::readValue(std::ifstream &infile) const {
  char data;
  infile.read(&data, 1);
  return new Int8Value(this,data);
}

DataArray* Int8::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  char* data = new char[size];
  infile.read(data, size);
  return new Int8Array(this, data, size);
}

DataArray* Int8::newArray(unsigned int size, unsigned int nbytes) const {
  char* data = new char[size];
  return new Int8Array(this, data, size);
}
