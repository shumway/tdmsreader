#include <iostream>
#include <fstream>

#include "TDMSReader.h"
#include "ObjectDefaults.h"
#include "LeadIn.h"
#include "MetaData.h"
#include "Error.h"
#include "TDMSData.h"

TDMSReader::TDMSReader() : objectDefaults(0) {
}

void TDMSReader::checkSizeOfTypes() {
  std::cout << "\nsize of char should be 1: " << sizeof(char) << std::endl;
  std::cout << "size of short should be 2: " << sizeof(short) << std::endl;
  std::cout << "size of int should be 4: " << sizeof(int) << std::endl;
  std::cout << "size of long should be 4: " << sizeof(long) << std::endl;
  std::cout << "size of long long should be 8: " << sizeof(long long)
            << std::endl;
  std::cout << "size of float should be 4: " << sizeof(float) << std::endl;
  std::cout << "size of double should be 8: " << sizeof(double) << std::endl;
  std::cout << "size of long double should be 16: " << sizeof(long double)
            << std::endl;
  std::cout << "size of bool should be 1: " << sizeof(bool) << std::endl;
}

TDMSReader::~TDMSReader() {
  delete objectDefaults;
}

void TDMSReader::read(const std::string &filename, 
    TDMSData* data, const bool verbose) {
  if (objectDefaults) delete objectDefaults; 
  objectDefaults = new ObjectDefaults();
  std::ifstream infile(filename.c_str(), std::ios::binary | std::ios::in);
  metaData = 0;
  while (!infile.eof()) {
    LeadIn *leadIn = 0;
    try {
      leadIn = new LeadIn(infile);
    } catch (EOFError) {
      break;
    } catch (Error error) {
      std::cout << "caught an Error\n" << error.message << std::endl;
    }
    if (infile.eof()) break;
    if (verbose) leadIn->print();
    if (leadIn->hasMetaData()) {
      metaData = new MetaData(infile, objectDefaults);
      if (verbose) metaData->print();
    } 

    if (leadIn->hasRawData()) {
      metaData->readRawData();
    }
    data->storeObjects(metaData);
  };
  delete metaData;
}
