#ifndef OBJECT_H
#define OBJECT_H

#include <string>
#include <fstream>
#include <map>
class ObjectDefaults;
class DataType;
class DataValue;
class DataArray;

class Object {
friend class ObjectDefaults;
public:
  typedef std::pair<std::string, const DataValue*> Property;
  Object(std::ifstream &infile, ObjectDefaults *objectDefaults);
  Property readProperty();
  void readPath();
  void readRawDataInfo();
  void readPropertyCount();
  void readRawData();
  bool hasRawData() {return flagHasRawData;}
  const std::string& getPath() {return path;}
  const DataType* getDataType() {return dataType;}
  const DataArray* getRawData() {return rawData;}
private:
  std::ifstream &infile;
  ObjectDefaults *objectDefaults;
  std::string path;
  std::map<std::string, std::string> properties;
  unsigned int rawDataIndex;
  bool flagHasRawData;
  unsigned int propertyCount;
  const DataType *dataType;
  int dimension;
  long long nvalue;
  long long nbytes;
  DataArray* rawData;
};

#endif
