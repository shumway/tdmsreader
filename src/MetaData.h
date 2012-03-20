#ifndef META_DATA_H
#define META_DATA_H

#include <fstream>
#include <list>

class ObjectDefaults;
class Object;

class MetaData {
public:
    typedef std::list<Object*> ObjectList;
    MetaData(std::ifstream &infile, ObjectDefaults* objectDefaults);
    void readObjectCount();
    void readRawData();
    void print() const;
    const ObjectList& getObjectList() const;
private:
    std::ifstream& infile;
    ObjectDefaults *objectDefaults;
    unsigned int objectCount;
    ObjectList objects;
};

#endif
