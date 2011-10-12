#include <string>
#include <fstream>
#include <map>

#include "Int8Type.h"
#include "DataValue.h"
#include "DataArray.h"
#include "Error.h"


DataValue* Int8Type::readValue(std::ifstream &infile) const {
  char data;
  infile.read(&data, 1);
  return new Int8Value(this,data);
}

DataArray* Int8Type::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  char* data = new char[size];
  infile.read(data, size);
  return new Int8Array(this, data, size);
}

DataArray* Int8Type::newArray(unsigned int size, unsigned int nbytes) const {
  char* data = new char[size];
  return new Int8Array(this, data, size);
}
