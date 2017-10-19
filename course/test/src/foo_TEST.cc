#include "foo.h"

#include "gtest/gtest.h"

namespace cppcourse {
namespace test {

GTEST_TEST(FooTest, Accessors) {
  const int kValue{1};
  const Foo f(kValue);
  EXPECT_EQ(f.value(), kValue);
}


GTEST_TEST(FooTest, StringConversion) {
  const int kValue{1};
  const Foo f(kValue);
  EXPECT_EQ(f.string(), std::to_string(kValue));
}

}  // test
}  // cppcourse

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}