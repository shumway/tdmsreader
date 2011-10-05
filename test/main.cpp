#include <gtest/gtest.h>

namespace {

class FooTest : public ::testing::Test {
 protected:

  FooTest() {}

  virtual ~FooTest() {}

  virtual void SetUp() {}

  virtual void TearDown() {}
};

TEST_F(FooTest, DoesXyz) {
  // Exercises the Xyz feature of Foo.
}

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

