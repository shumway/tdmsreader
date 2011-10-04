#include <iostream>
#include "TDMSData.h"
#include "Group.h"
#include "DataArray.h"

int main(int argc, char** argv) {
  std::cout << "\nTDMS Reader\n" << std::endl;
  TDMSData tdmsData(argv[1]);

  int nobject = tdmsData.getGroupCount();
  tdmsData.print(std::cout);

  return 0;
}
