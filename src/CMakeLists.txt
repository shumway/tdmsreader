set (SOURCES 
    Channel.cpp
    LeadIn.cpp
    TDMSReader.cpp
    MetaData.cpp
    Object.cpp
    ObjectDefaults.cpp
    Error.cpp
    Root.cpp
    Group.cpp
    TDMSData.cpp
)

add_subdirectory(types)

add_executable(readTDMS ${SOURCES} main.cpp)

add_subdirectory(test)