#include <gtest/gtest.h>
#include "types/Int8.h"
#include "types/Int8Value.h"

namespace {

class Int8Test : public ::testing::Test {
 protected:


  virtual void SetUp() {
      int8type = new Int8();
  }

  virtual void TearDown() {
      delete int8type;
  }

  const DataType* int8type;
};

TEST_F(Int8Test, testReadValue) {
//    Int8Value *value = (Int8Value*)int8type->readValue();
}

}
