#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "Object.h"
#include "ObjectDefaults.h"
#include "DataType.h"

Object::Object(std::ifstream &infile, ObjectDefaults *objectDefaults)
  : infile(infile), objectDefaults(objectDefaults), rawData(0) {
  readPath();
  objectDefaults->initializeObject(this);
  readRawDataInfo();
  readPropertyCount();
  for (unsigned int i=0; i<propertyCount; ++i) {
    Property property = readProperty();
  }
}  

Object::Property Object::readProperty() {
  unsigned int strlen;
  infile.read((char*)&strlen,4);
  char buffer[strlen];
  infile.read(buffer, strlen);
  std::string name(buffer, strlen);
  unsigned int itype;
  infile.read((char*)&itype, 4);
  const DataType *dataType = DataType::fromIndex(itype);
  DataValue *value = dataType->readValue(infile); 
  return Property(name, value);
} 
  
void Object::readPath() {
  unsigned int strlen = 0;
  infile.read((char*)&strlen, 4);
  char buffer[strlen];
  infile.read(buffer, strlen);
  path = std::string(buffer, strlen);
}

void Object::readRawDataInfo() {
  infile.read((char*)&rawDataIndex, 4);
  flagHasRawData = (rawDataIndex != 4294967295);
  if (flagHasRawData && rawDataIndex>0) {
    unsigned int itype;
    infile.read((char*)&itype, 4);
    dataType = DataType::fromIndex(itype);
    infile.read((char*)&dimension, 4);
    infile.read((char*)&nvalue, 8);
    if (itype == 32) {
      infile.read((char*)&nbytes, 8);
    }
  }
}

void Object::readPropertyCount() {
  infile.read((char*)&propertyCount, 4);
}

void Object::readRawData() {
  rawData = dataType->readArray(infile, nvalue, nbytes);
}
