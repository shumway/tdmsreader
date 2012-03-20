#ifndef ROOT_H
#define ROOT_H

#include <string>
#include <vector>
class Group;

class Root {
public:
    typedef std::vector<Group*> GroupSet;
    Root() {}

    int getGroupCount() const;
    const GroupSet& getGroups() const;
    void addGroup(Group* group);
    Group* getGroup(const std::string &name);
    const Group* getGroup(const std::string &name) const;

    void print(std::ostream &os) const;
private:
    GroupSet groups;
};
#endif
