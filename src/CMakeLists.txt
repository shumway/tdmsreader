INCLUDE_DIRECTORIES(${TDMSREADER_SOURCE_DIR}/include)

set (sources Channel.cpp LeadIn.cpp TDMSReader.cpp DataArray.cpp MetaData.cpp DataType.cpp Object.cpp DataValue.cpp ObjectDefaults.cpp Error.cpp Root.cpp Group.cpp TDMSData.cpp)

add_executable(readTDMS ${sources} main.cpp)
