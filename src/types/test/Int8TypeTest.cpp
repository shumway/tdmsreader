#include <gtest/gtest.h>
#include "types/Int8Type.h"
#include "types/Int8Value.h"

namespace {

class Int8TypeTest : public ::testing::Test {
 protected:


  virtual void SetUp() {
      int8type = new Int8Type();
  }

  virtual void TearDown() {
      delete int8type;
  }

  const DataType* int8type;
};

TEST_F(Int8TypeTest, testReadValue) {
//    Int8Value *value = (Int8Value*)int8type->readValue();
}

}
