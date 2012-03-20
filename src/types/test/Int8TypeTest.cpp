#include <gtest/gtest.h>
#include "types/Int8Type.h"

namespace {

class Int8TypeTest : public ::testing::Test {
 protected:

  Int8TypeTest() {
    int8type = new Int8Type();
  }

  virtual ~Int8TypeTest() {
    delete int8type;
  }

  virtual void SetUp() {}

  virtual void TearDown() {}

  const DataType* int8type;
};

TEST_F(Int8TypeTest, DoesXyz) {
  // Exercises the Xyz feature of Foo.
}
}
