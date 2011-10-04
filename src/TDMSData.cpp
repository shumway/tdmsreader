#include <iostream>
#include <algorithm>
#include "TDMSData.h"
#include "TDMSReader.h"
#include "MetaData.h"
#include "Object.h"

TDMSData::TDMSData(const std::string &filename)
  : filename(filename) {
  TDMSReader tdmsReader;
  tdmsReader.read(filename, this, false);
}

TDMSData::~TDMSData() {
}

void TDMSData::storeObjects(const MetaData *metaData) {
  const MetaData::ObjectList &objectList = metaData->getObjectList();
  for (MetaData::ObjectList::const_iterator obj = objectList.begin(); 
       obj != objectList.end(); ++obj) {
    std::string pathName = (*obj)->getPath();
    if (isRoot(pathName)) {
    } else {
      if (isGroup(pathName)) {
        Group *group = root.getGroup(pathName);
        if (group==0) {
          group = new Group(pathName);
          root.addGroup(group);
        }
      } else {
        int islash = pathName.find('/', 1);
        std::string channelName = pathName.substr(islash+1);
        std::string groupName = pathName.substr(0,islash);
        Group *group = root.getGroup(groupName);
        Channel *channel = group->getChannel(channelName);
        if (channel==0) {
          channel = new Channel(channelName);
          group->addChannel(channel);
        }
        if ((*obj)->hasRawData()) {
          channel->setDataType((*obj)->getDataType());
          channel->addRawData((*obj)->getRawData()); 
        }
      }
    }
  }
}

void TDMSData::print(std::ostream& os) const {
  root.print(os);
}

bool TDMSData::isRoot(const std::string& pathName) const { 
  return pathName == "/";
}

bool TDMSData::isGroup(const std::string& pathName) const { 
  int slashCount = std::count(pathName.begin(), pathName.end(), '/');
  return slashCount == 1;
}

Group* TDMSData::getGroup(const std::string &name) {
  return root.getGroup(name);
}
