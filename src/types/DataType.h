#ifndef DATA_TYPE_H
#define DATA_TYPE_H

#include <iostream>
#include <string>
#include <fstream>

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
