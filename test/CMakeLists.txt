find_package(GTest QUIET)

if(GTEST_FOUND)
  message("GTEST found, unit testing is enabled") 
  set(EXECUTABLE_OUTPUT_PATH ${TDMSREADER_BINARY_DIR}/test)
  include_directories(${GTEST_INCLUDE_DIRS})

FIND_LIBRARY(GMOCK_LIBRARIES gmock
    HINTS
        $ENV{GMOCK_ROOT}
        ${GMOCK_ROOT}
		$ENV{GMOCK_ROOT}/make
        ${GMOCK_ROOT}/make
)
if(NOT DEFINED GMOCK_LIBRARIES)
	MESSAGE(SEND_ERROR "Google mock librari path not Set to GMOCK_LIBRARIES")
endif()

find_path(GMOCK_INCLUDE_DIR gmock/gmock.h
    HINTS
        $ENV{GMOCK_ROOT}/include
        ${GMOCK_ROOT}/include
)
if(NOT DEFINED GMOCK_INCLUDE_DIR)
	MESSAGE(SEND_ERROR "Google mock include path not Set to GMOCK_INCLUDE_DIR")	
endif()	

  set(SRC_DIR ${TDMSREADER_SOURCE_DIR}/src)


  add_executable(Int8TypeTest Int8TypeTest.cpp
    ${SRC_DIR}/Int8Type.cpp
    ${SRC_DIR}/Int8Value.cpp
    ${SRC_DIR}/Int8Array.cpp
    ${SRC_DIR}/DataValue.cpp
    ${SRC_DIR}/DataArray.cpp
  )
  target_link_libraries(Int8TypeTest ${GTEST_BOTH_LIBRARIES})

else()
  message(AUTHOR_WARNING "GTEST not found, unit testing not enabled") 
endif()
