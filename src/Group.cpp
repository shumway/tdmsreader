#include "Group.h"
#include "Error.h"
#include "Channel.h"
#include <iostream>

void Group::addChannel(Channel* channel) {
    channels.push_back(channel);
}

Channel* Group::getChannel(const std::string &name) {
    for (ChannelSet::iterator iter = channels.begin(); iter != channels.end();
            ++iter) {
        if ((*iter)->getName() == name) return *iter;
    }
    return 0;
}

const Channel* Group::getChannel(const std::string &name) const {
    for (ChannelSet::const_iterator iter = channels.begin();
            iter != channels.end(); ++iter) {
        if ((*iter)->getName() == name) return *iter;
    }
    std::string message("Channel ");
    message += name + std::string(" not found.");
    std::cout << message << std::endl;
    throw Error(message);
    return 0;
}

void Group::print(std::ostream &os) const {
    os << name << std::endl;
    for (ChannelSet::const_iterator iter = channels.begin();
            iter != channels.end(); ++iter) {
        (*iter)->print(os);
    }
}

Group::Group(const std::string & name)
:   name(name) {
}

const std::string & Group::getName() const {
    return name;
}

int Group::getGroupCount() const {
    return channels.size();
}

const Group::ChannelSet& Group::getChannels() const {
    return channels;
}


