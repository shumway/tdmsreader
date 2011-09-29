#include <iostream>
#include "TDMSData.h"
#include "Group.h"
#include "DataArray.h"

int main(int argc, char* argv) {
  std::cout << "\nTDMS Reader\n" << std::endl;
  TDMSData tdmsData("test.tdms");

  int nobject = tdmsData.getGroupCount();
  tdmsData.print(std::cout);


  // Test reading some data.
  Group *group = tdmsData.getGroup("/'188'");
  Channel *channel = group->getChannel("'Current'");
  const DataArray *data = channel->getData();
  int ndata = data->getSize();
  const short* dataArray = (short*)data->getData();

  // Print what we just read.
  std::cout << "\nTest: Reading group " << group->getName() << std::endl;
  std::cout << "Reading channel ";
  channel->print(std::cout);
  for (int i=0; i<ndata/10; ++i) std::cout << dataArray[i] << " ";
  std::cout << "..." << std::endl;
  for (int i=9*ndata/10; i<ndata; ++i) std::cout << dataArray[i] << " ";
  std::cout << std::endl;

  return 0;
}
