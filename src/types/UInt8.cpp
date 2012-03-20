#include "types/UInt8.h"
#include "types/UInt8Array.h"
#include "types/UInt8Value.h"

DataValue* UInt8::readValue(std::ifstream &infile) const {
  unsigned char data;
  infile.read((char*)&data, 1);
  return new UInt8Value(this,data);
}

DataArray* UInt8::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  unsigned char* data = new unsigned char[size];
  infile.read((char*)data, size);
  return new UInt8Array(this, data, size);
}

DataArray* UInt8::newArray(unsigned int size, unsigned int nbytes) const {
  unsigned char* data = new unsigned char[size];
  return new UInt8Array(this, data, size);
}
