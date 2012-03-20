#include "types/DataTypeFactory.h"
#include "Error.h"
#include "types/Int8.h"
#include "types/Int16.h"
#include "types/Int32.h"
#include "types/Int64.h"
#include "types/UInt8.h"

std::map<int, const DataType*> DataTypeFactory::singletonObjects;

const DataType* DataTypeFactory::instanceFromIndex(unsigned int itype) {
  if (singletonObjects.size() == 0) {
    //std::cout << "initializing objects" << std::endl;
    singletonObjects[INT8] = new Int8();
    singletonObjects[INT16] = new Int16();
    singletonObjects[INT32] = new Int32();
    singletonObjects[INT64] = new Int64();
    singletonObjects[UINT8] = new UInt8();
    singletonObjects[UINT16] = new UInt16();
    singletonObjects[UINT32] = new UInt32();
    singletonObjects[UINT64] = new UInt64();
    singletonObjects[FLOAT32] = new Float32();
    singletonObjects[FLOAT64] = new Float64();
    singletonObjects[FLOAT128] = new Float128();
    singletonObjects[STRING] = new String();
    singletonObjects[BOOL] = new Bool();
  }
  if (singletonObjects.count(itype)==0) {
    throw IOError("Unimplented data type");
  }
  return singletonObjects[itype];
}

const int DataTypeFactory::INT8 = 1;
const int DataTypeFactory::INT16 = 2;
const int DataTypeFactory::INT32 = 3;
const int DataTypeFactory::INT64 = 4;
const int DataTypeFactory::UINT8 = 5;
const int DataTypeFactory::UINT16 = 6;
const int DataTypeFactory::UINT32 = 7;
const int DataTypeFactory::UINT64 = 8;
const int DataTypeFactory::FLOAT32 = 9;
const int DataTypeFactory::FLOAT64 = 10;
const int DataTypeFactory::FLOAT128 = 11;
const int DataTypeFactory::STRING = 32;
const int DataTypeFactory::BOOL = 33;

