#ifndef CHANNEL_H
#define CHANNEL_H

#include <vector>
#include <string>
class DataType;
class DataArray;

class Channel {
public:
    typedef std::vector<const DataArray*> RawDataSequence;
    Channel(const std::string& name);
    const std::string& getName() const;
    void print(std::ostream &os) const;
    void setDataType(const DataType *type);
    void addRawData(const DataArray *data);
    unsigned int getDataCount() const;
    const DataArray* getData() const;
private:
    const std::string name;
    RawDataSequence rawData;
    const DataType* dataType;
    unsigned int ndata;
    mutable DataArray *data;
};
#endif
