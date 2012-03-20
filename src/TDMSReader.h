#ifndef TDMS_READER_H
#define TDMS_READER_H

class ObjectDefaults;
class MetaData;
class TDMSData;

class TDMSReader {
public:
  TDMSReader();
  ~TDMSReader();
  void checkSizeOfTypes();
  void read(const std::string &filename, TDMSData*, const bool verbose=true);
private:
  ObjectDefaults* objectDefaults;
  MetaData* metaData;
};

#endif
