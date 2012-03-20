#include <iostream>
#include <fstream>

#include "MetaData.h"
#include "Object.h"

MetaData::MetaData(std::ifstream &infile, ObjectDefaults* objectDefaults)
: infile(infile), objectDefaults(objectDefaults), objectCount() {
    readObjectCount();
    for (unsigned int i=0; i<objectCount; ++i) {
        objects.push_back(new Object(infile, objectDefaults));
    }
}

void MetaData::readObjectCount() {
    infile.read((char*)&objectCount,4);
}

void MetaData::readRawData() {
    for (ObjectList::iterator object = objects.begin();
            object != objects.end(); ++object) {
        if ((*object)->hasRawData()) {
            (*object)->readRawData();
        } else {
        }
    }
}

void MetaData::print() const {
    std::cout << "\nRead meta data" << std::endl;
    std::cout << "  Contains " << objectCount << " objects." << std::endl;
}

const MetaData::ObjectList & MetaData::getObjectList() const {
    return objects;
}


