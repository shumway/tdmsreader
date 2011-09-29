#include "Channel.h"
#include "DataArray.h"
#include <cstring>

Channel::Channel(const std::string& name)
  : name(name), dataType(0), ndata(0), data(0) {
}

void Channel::print(std::ostream &os) const {
  os << "  " << name << ": ";
  if (dataType) {
    dataType->print(os);
    os << "[" << ndata << "]";
  }
  os << std::endl;
}

void Channel::addRawData(const DataArray *data) {
  ndata += data->getSize();
  rawData.push_back(data);
}

const DataArray* Channel::getData() const {
  if (data == 0) {
    data = dataType->newArray(ndata,0);
    char *ptr = (char*)data->getData();
    for (RawDataSequence::const_iterator iter = rawData.begin();
         iter != rawData.end(); ++iter) {
      int size = (*iter)->getSize();
      int nbytes = (*iter)->getSizeOf() * size;
      std::memcpy(ptr, (*iter)->getData(), nbytes);
      ptr += nbytes;
    }
  }
  return data;
}
