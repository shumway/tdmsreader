#include <iostream>
#include <config.h>
#include "TDMSData.h"
#include "Group.h"
#include "types/DataArray.h"


int main(int argc, char** argv) {
  std::cout << "\nTDMS Reader v" << TDMSREADER_VERSION_MAJOR  
            << "." << TDMSREADER_VERSION_MINOR
            << "\n" << std::endl;

  TDMSData tdmsData(argv[1]);

  int nobject = tdmsData.getGroupCount();
  tdmsData.print(std::cout);

  return 0;
}
