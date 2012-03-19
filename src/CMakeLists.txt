set (sources 
    Channel.cpp
    LeadIn.cpp
    TDMSReader.cpp
    DataArray.cpp
    MetaData.cpp
    DataType.cpp
    Object.cpp
    DataValue.cpp
    ObjectDefaults.cpp
    Error.cpp
    Root.cpp
    Group.cpp
    TDMSData.cpp
    Int8Type.cpp
    Int8Value.cpp
    Int8Array.cpp
    DataTypeFactory.cpp
)

add_executable(readTDMS ${sources} main.cpp)

add_subdirectory(test)