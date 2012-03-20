#include <string>
#include <fstream>
#include <map>

#include "types/DataType.h"
#include "types/DataValue.h"
#include "types/DataArray.h"
#include "Error.h"

DataValue* String::readValue(std::ifstream &infile) const {
  unsigned int strlen;
  infile.read((char*)&strlen,4);
  char* data = new char[strlen];
  infile.read(data, strlen);
  return new StringValue(this, std::string(data, strlen));
}

DataArray* String::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  char* data = new char[nbytes];
  infile.read(data, nbytes);
  return new StringArray(this, data, size, nbytes);
}

DataArray* String::newArray(unsigned int size, unsigned int nbytes) const {
  char* data = new char[nbytes];
  return new StringArray(this, data, size, nbytes);
}

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
