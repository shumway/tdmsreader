#include <iostream>

#include "ObjectDefaults.h"
#include "Object.h"

void ObjectDefaults::initializeObject(Object* obj) {
  std::string path = obj->getPath();
  if (objects.count(path)) {
    const Object* old = objects[path];
    obj->properties = old->properties;
    obj->flagHasRawData = old->flagHasRawData;
    if (obj->flagHasRawData) {
      obj->dataType = old->dataType;
      obj->dimension = old->dimension;
      obj->nvalue = old->nvalue;
    }
  } else {
    objects[path] = obj;
  }
}
