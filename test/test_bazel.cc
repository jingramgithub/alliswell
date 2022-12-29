#include <gtest/gtest.h>

TEST(BazelTest, Compile) {
    EXPECT_STRNE("hello", "bazel");
    EXPECT_EQ(9*9, 81);
}
