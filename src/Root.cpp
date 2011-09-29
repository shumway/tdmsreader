#include "Root.h"

void Root::addGroup(Group* group) {
  //for (GroupSet::iterator iter = groups.begin(); iter != groups.end();
  //     ++iter) {
  //  if ((**iter) == (*group)) return;
  //}
  groups.push_back(group);
}

Group* Root::getGroup(const std::string &name) {
  for (GroupSet::iterator iter = groups.begin(); iter != groups.end();
       ++iter) {
    if ((*iter)->getName() == name) return *iter;
  }
  return 0;
}

const Group* Root::getGroup(const std::string &name) const {
  for (GroupSet::const_iterator iter = groups.begin(); iter != groups.end();
       ++iter) {
    if ((*iter)->getName() == name) return *iter;
  }
  return 0;
}

void Root::print(std::ostream &os) const {
  os << "There are " << groups.size() << " groups." << std::endl;
  for (GroupSet::const_iterator group = groups.begin();
       group != groups.end(); ++group) {
    (*group)->print(os);
  }
}
