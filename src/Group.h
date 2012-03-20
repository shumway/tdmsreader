#ifndef GROUP_H
#define GROUP_H

#include <string>
#include <vector>
class Channel;

class Group {
public:
    typedef std::vector<Channel*> ChannelSet;

    Group(const std::string& name);
    void addChannel(Channel* channel);

    const std::string& getName() const;
    int getGroupCount() const;
    const ChannelSet& getChannels() const;
    Channel* getChannel(const std::string &name);
    const Channel* getChannel(const std::string &name) const;
    void print(std::ostream &os) const;

private:
    const std::string name;
    ChannelSet channels;
};
#endif
