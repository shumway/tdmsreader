#ifndef TDMS_H
#define TDMS_H

#include <map>

class Object;

class ObjectDefaults {
public:
    void initializeObject(Object* obj);
private:
    std::map<std::string, const Object*> objects;
};

#endif
