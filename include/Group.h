#ifndef GROUP_H
#define GROUP_H

#include <string>
#include <vector>
#include "Channel.h"

class Group {
public:
  typedef std::vector<Channel*> ChannelSet;
  Group(const std::string& name) : name(name) {}
  const std::string& getName() const {return name;}
  int getGroupCount() const {return channels.size();}
  const ChannelSet& getChannels() const {return channels;}
  void addChannel(Channel* channel);
  Channel* getChannel(const std::string &name);
  const Channel* getChannel(const std::string &name) const;
  void print(std::ostream &os) const;
private:
  const std::string name;
  ChannelSet channels;
};
#endif
