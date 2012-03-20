#include <string>
#include <fstream>
#include <map>

#include "types/DataType.h"
#include "types/DataValue.h"
#include "types/DataArray.h"
#include "Error.h"

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

DataValue* UInt16::readValue(std::ifstream &infile) const {
  unsigned short data;
  infile.read((char*)&data, 2);
  return new UInt16Value(this,data);
}

DataArray* UInt16::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  unsigned short* data = new unsigned short[size];
  infile.read((char*)data, 2*size);
  return new UInt16Array(this, data, size);
}

DataArray* UInt16::newArray(unsigned int size, unsigned int nbytes) const {
  unsigned short* data = new unsigned short[size];
  return new UInt16Array(this, data, size);
}

DataValue* UInt32::readValue(std::ifstream &infile) const {
  unsigned int data;
  infile.read((char*)&data, 4);
  return new UInt32Value(this,data);
}

DataArray* UInt32::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  unsigned int* data = new unsigned int[size];
  infile.read((char*)data, 4*size);
  return new UInt32Array(this, data, size);
}

DataArray* UInt32::newArray(unsigned int size, unsigned int nbytes) const {
  unsigned int* data = new unsigned int[size];
  return new UInt32Array(this, data, size);
}

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

DataValue* Float64::readValue(std::ifstream &infile) const {
  double data;
  infile.read((char*)&data, 8);
  return new Float64Value(this,data);
}

DataArray* Float64::readArray(std::ifstream &infile, unsigned int size,
    unsigned int nbytes) const {
  double* data = new double[size];
  infile.read((char*)data, 4*size);
  return new Float64Array(this, data, size);
}

DataArray* Float64::newArray(unsigned int size, unsigned int nbytes) const {
  double* data = new double[size];
  return new Float64Array(this, data, size);
}

DataValue* Float128::readValue(std::ifstream &infile) const {
  long double data;
  infile.read((char*)&data, 8);
  return new Float128Value(this,data);
}

DataArray* Float128::readArray(std::ifstream &infile, 
    unsigned int size, unsigned int nbytes) const {
  long double* data = new long double[size];
  infile.read((char*)data, 4*size);
  return new Float128Array(this, data, size);
}

DataArray* Float128::newArray(unsigned int size, unsigned int nbytes) const {
  long double* data = new long double[size];
  return new Float128Array(this, data, size);
}

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
