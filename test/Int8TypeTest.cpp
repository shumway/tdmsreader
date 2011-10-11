#include <gtest/gtest.h>
#include "Int8Type.h"

namespace {

class Int8TypeTest : public ::testing::Test {
 protected:

  Int8TypeTest() {}

  virtual ~Int8TypeTest() {}

  virtual void SetUp() {}

  virtual void TearDown() {}
};

TEST_F(Int8TypeTest, DoesXyz) {
  // Exercises the Xyz feature of Foo.
}

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

