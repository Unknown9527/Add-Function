#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

using namespace std;

TEST(AddInt, AddInt) {
  Solution solution;
  EXPECT_EQ(solution.Add(3, 5), 8);
}

TEST(AddStr, AddStr) {
  Solution solution;
  EXPECT_EQ(solution.Add("abc", "efg"), "abcefg");
}

TEST(AddStrInt, AddStrInt) {
  Solution solution;
  EXPECT_EQ(solution.Add("EE", 599), "EE599");
}

TEST(AddIntStr, AddIntStr) {
  Solution solution;
  EXPECT_EQ(solution.Add(599, "EE"), "599EE");
}