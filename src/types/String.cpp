#include "types/String.h"
#include "types/StringArray.h"
#include "types/StringValue.h"

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
