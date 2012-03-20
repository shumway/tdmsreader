#ifndef DATA_ARRAY_H
#define DATA_ARRAY_H

class DataType;

class DataArray {
public:
  DataArray(const DataType *type, unsigned int size, int sizeOf)
    : type(type), size(size), sizeOf(sizeOf) {
  }
  DataArray(const DataType *type, unsigned int size, int sizeOf, void *data)
    : type(type), size(size), sizeOf(sizeOf), data(data) {
  }
  virtual ~DataArray() {}
  unsigned int getSize() const {return size;}
  int getSizeOf() const {return sizeOf;}
  void* getData() const {return data;} 
private:
  const DataType *type;
  unsigned int size;
  int sizeOf;
  void* data;
};

class Int64Array : public DataArray {
public:
  Int64Array(const DataType* type, long long* data, unsigned int size);
  long long* data;
};

class UInt8Array : public DataArray {
public:
  UInt8Array(const DataType* type, unsigned char* data, unsigned int size);
  unsigned char* data;
};

class UInt16Array : public DataArray {
public:
  UInt16Array(const DataType* type, unsigned short* data, unsigned int size);
  unsigned short* data;
};

class UInt32Array : public DataArray {
public:
  UInt32Array(const DataType* type, unsigned int* data, unsigned int size);
  unsigned int* data;
};

class UInt64Array : public DataArray {
public:
  UInt64Array(const DataType* type, unsigned long long* data,
    unsigned int size);
  unsigned long long* data;
};

class Float32Array : public DataArray {
public:
  Float32Array(const DataType* type, float* data, unsigned int size);
  float* data;
};

class Float64Array : public DataArray {
public:
  Float64Array(const DataType* type, double* data, unsigned int size);
  double* data;
};

class Float128Array : public DataArray {
public:
  Float128Array(const DataType* type, long double* data, unsigned int size);
  long double* data;
};

class StringArray : public DataArray {
public:
  StringArray(const DataType* type, char* data, unsigned int size,
    unsigned long int nbytes);
  char* data;
  unsigned long int nbytes;
};

class BoolArray : public DataArray {
public:
  BoolArray(const DataType* type, bool* data, unsigned int size);
  bool* data;
};
#endif
