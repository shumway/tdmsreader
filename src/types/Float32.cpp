#include "types/Float32.h"
#include "types/Float32Array.h"
#include "types/Float32Value.h"

DataValue* Float32::readValue(std::ifstream &infile) const {
  float data;
  infile.read((char*)&data, 4);
  return new Float32Value(this,data);
}

DataArray* Float32::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  float* data = new float[size];
  infile.read((char*)data, 4*size);
  return new Float32Array(this, data, size);
}

DataArray* Float32::newArray(unsigned int size, unsigned int nbytes) const {
  float* data = new float[size];
  return new Float32Array(this, data, size);
}
