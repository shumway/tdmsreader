#ifndef DATA_TYPE_H
#define DATA_TYPE_H

#include <iostream>
#include <string>
#include <fstream>
#include <map>

class DataValue;
class DataArray;

class DataType {
public:
  DataType() {}
  virtual ~DataType() {}
  virtual DataValue* readValue(std::ifstream &infile) const=0;
  virtual DataArray* readArray(std::ifstream &infile,
    unsigned int size, unsigned int nbytes) const=0;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const=0;
  virtual void print(std::ostream &os) const {}
private:
  int itype;
};

class Int64 : public DataType {
  virtual DataValue* readValue(std::ifstream &infile) const;
  virtual DataArray* readArray(std::ifstream &infile, unsigned int size,
      unsigned int nbytes) const;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const;
  virtual void print(std::ostream &os) const {os << "Int64";}
};

class UInt8 : public DataType {
  virtual DataValue* readValue(std::ifstream &infile) const;
  virtual DataArray* readArray(std::ifstream &infile, unsigned int size,
      unsigned int nbytes) const;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const;
  virtual void print(std::ostream &os) const {os << "UInt8";}
};

class UInt16 : public DataType {
  virtual DataValue* readValue(std::ifstream &infile) const;
  virtual DataArray* readArray(std::ifstream &infile, unsigned int size,
      unsigned int nbytes) const;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const;
  virtual void print(std::ostream &os) const {os << "UInt16";}
};

class UInt32 : public DataType {
  virtual DataValue* readValue(std::ifstream &infile) const;
  virtual DataArray* readArray(std::ifstream &infile, unsigned int size,
      unsigned int nbytes) const;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const;
  virtual void print(std::ostream &os) const {os << "UInt32";}
};

class UInt64 : public DataType {
  virtual DataValue* readValue(std::ifstream &infile) const;
  virtual DataArray* readArray(std::ifstream &infile, unsigned int size,
      unsigned int nbytes) const;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const;
  virtual void print(std::ostream &os) const {os << "UInt64";}
};

class Float32 : public DataType {
  virtual DataValue* readValue(std::ifstream &infile) const;
  virtual DataArray* readArray(std::ifstream &infile, unsigned int size,
      unsigned int nbytes) const;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const;
  virtual void print(std::ostream &os) const {os << "Float32";}
};

class Float64 : public DataType {
  virtual DataValue* readValue(std::ifstream &infile) const;
  virtual DataArray* readArray(std::ifstream &infile, unsigned int size,
      unsigned int nbytes) const;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const;
  virtual void print(std::ostream &os) const {os << "Float64";}
};

class Float128 : public DataType {
  virtual DataValue* readValue(std::ifstream &infile) const;
  virtual DataArray* readArray(std::ifstream &infile, unsigned int size,
      unsigned int nbytes) const;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const;
  virtual void print(std::ostream &os) const {os << "Float128";}
};

class String : public DataType {
  virtual DataValue* readValue(std::ifstream &infile) const;
  virtual DataArray* readArray(std::ifstream &infile, unsigned int size,
      unsigned int nbytes) const;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const;
  virtual void print(std::ostream &os) const {os << "String";}
};

class Bool : public DataType {
  virtual DataValue* readValue(std::ifstream &infile) const;
  virtual DataArray* readArray(std::ifstream &infile, unsigned int size,
      unsigned int nbytes) const;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const;
  virtual void print(std::ostream &os) const {os << "Bool";}
};
 
#endif
