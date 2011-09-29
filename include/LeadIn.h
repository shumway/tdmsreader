#ifndef LEAD_IN_H
#define LEAD_IN_H

#include <fstream>

class LeadIn{
public:
  LeadIn(std::ifstream &infile);
  bool hasMetaData() const {return flagHasMetaData;}
  bool hasRawData() const {return flagHasRawData;}
  void checkTDMSString();
  void parseTOCMask();
  void readVersionNumber();
  void readNextSegmentOffset();
  void readDataOffset();
  void print() const;
private:
  std::ifstream& infile;
  bool flagHasMetaData;
  bool flagHasObjectList;
  bool flagHasRawData;
  bool flagIsInterleaved;
  bool flagIsBigEndian;
  bool flagHasDAQmxData;
  unsigned int versionNumber; 
  unsigned long long nextSegmentOffset;
  unsigned long long dataOffset;
};

#endif
