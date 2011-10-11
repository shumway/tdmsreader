#include_directories($ENV{GTEST_ROOT}/include)
#link_directories($ENV{GTEST_ROOT})
#
#add_executable(testTDMS main.cpp)
#target_link_libraries(testTDMS gtest)

find_package(GTest QUIET)

if(GTEST_FOUND)
  message("GTEST found, unit testing is enabled") 
  enable_testing()
  set(EXECUTABLE_OUTPUT_PATH ${TDMSREADER_BINARY_DIR}/test)
  include_directories(${GTEST_INCLUDE_DIRS})

  add_executable(Int8TypeTest Int8TypeTest.cpp)
  target_link_libraries(Int8TypeTest ${GTEST_BOTH_LIBRARIES})
  add_test(AllTestsInFoo Int8TypeTest)

else()
  message(AUTHOR_WARNING "GTEST not found, unit testing not enabled") 
endif()
