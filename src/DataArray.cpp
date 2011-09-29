#include "DataArray.h"
#include <iostream>

DataArray::DataArray(const DataType *type, unsigned int size, int sizeOf)
  : type(type), size(size), sizeOf(sizeOf) {
}

DataArray::DataArray(const DataType *type, unsigned int size, int sizeOf,
  void *data)
  : type(type), size(size), sizeOf(sizeOf), data(data) {
}

DataArray::~DataArray() {
}

Int8Array::Int8Array(const DataType* type, char* data, unsigned int size) 
  : DataArray(type, size, 1), data(data) {
}

Int16Array::Int16Array(const DataType* type, short* data, unsigned int size) 
  : DataArray(type, size, 2, data) {
}

Int32Array::Int32Array(const DataType* type, int* data, unsigned int size) 
  : DataArray(type, size, 4), data(data) {
}

Int64Array::Int64Array(const DataType* type, long long* data, 
  unsigned int size) 
  : DataArray(type, size, 8), data(data) {
}

UInt8Array::UInt8Array(const DataType* type, unsigned char* data,
  unsigned int size) 
  : DataArray(type, size, 1), data(data) {
}

UInt16Array::UInt16Array(const DataType* type, unsigned short* data,
  unsigned int size) 
  : DataArray(type, size, 2), data(data) {
}

UInt32Array::UInt32Array(const DataType* type, unsigned int* data,
  unsigned int size) 
  : DataArray(type, size, 4), data(data) {
}

UInt64Array::UInt64Array(const DataType* type, unsigned long long* data,
  unsigned int size) 
  : DataArray(type, size, 8), data(data) {
}

Float32Array::Float32Array(const DataType* type, float* data,
  unsigned int size) 
  : DataArray(type, size, 4), data(data) {
}

Float64Array::Float64Array(const DataType* type, double* data,
  unsigned int size) 
  : DataArray(type, size, 8), data(data) {
}

Float128Array::Float128Array(const DataType* type, long double* data,
  unsigned int size) 
  : DataArray(type, size, 16), data(data) {
}

StringArray::StringArray(const DataType* type, char* data,
  unsigned int size, unsigned long int nbytes) 
  : DataArray(type, size, nbytes/size), data(data) {
}

BoolArray::BoolArray(const DataType* type, bool* data, unsigned int size) 
  : DataArray(type, size, 1), data(data) {
}
