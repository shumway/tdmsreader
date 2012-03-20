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
