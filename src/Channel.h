#ifndef CHANNEL_H
#define CHANNEL_H

#include <vector>
#include "types/DataType.h"
class DataArray;

class Channel {
public:
  typedef std::vector<const DataArray*> RawDataSequence;
  Channel(const std::string& name);
  const std::string& getName() const {return name;}
  void print(std::ostream &os) const;
  void setDataType(const DataType *type) {dataType =  type;}
  void addRawData(const DataArray *data);
  unsigned int getDataCount() const {return ndata;}
  const DataArray* getData() const;
private:
  const std::string name;
  RawDataSequence rawData;
  const DataType* dataType;
  unsigned int ndata;
  mutable DataArray *data;
};
#endif
