#ifndef DATA_TYPE_FACTORY_H
#define DATA_TYPE_FACTORY_H

class DataType;
#include <map>


class DataTypeFactory {
public:
  static const DataType* instanceFromIndex(unsigned int itype);
  static const int INT8;
  static const int INT16;
  static const int INT32;
  static const int INT64;
  static const int UINT8;
  static const int UINT16;
  static const int UINT32;
  static const int UINT64;
  static const int FLOAT32;
  static const int FLOAT64;
  static const int FLOAT128;
  static const int STRING;
  static const int BOOL;
private:
  static std::map<int, const DataType*> singletonObjects;
};

#endif
