#ifndef TDMS_DATA_H
#define TDMS_DATA_H

#include <string>
#include <set>
#include <vector>

class MetaData;
#include "Root.h"

class TDMSData {
friend class TDMSReader;
public:
  TDMSData(const std::string &filename);
  ~TDMSData();
  int getGroupCount() const {return root.getGroupCount();} 
  Group* getGroup(const std::string&);
  const Root& getRoot() const {return root;}
  void print(std::ostream &os) const;
private:
  const std::string filename;
  void storeObjects(const MetaData*);
  Root root;
  bool isRoot(const std::string& pathName) const;
  bool isGroup(const std::string& pathName) const;
};

#endif
