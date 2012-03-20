#ifndef ROOT_H
#define ROOT_H

#include <string>
#include <vector>
#include "Group.h"

class Root {
public:
  typedef std::vector<Group*> GroupSet;
  Root() {}
  int getGroupCount() const {return groups.size();}
  const GroupSet& getGroups() const {return groups;}
  void addGroup(Group* group);
  Group* getGroup(const std::string &name);
  const Group* getGroup(const std::string &name) const;
  void print(std::ostream &os) const;
private:
  GroupSet groups;
};
#endif
