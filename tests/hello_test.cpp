#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(HelloTest, BasicAssertions) {
    EXPECT_STRNE("hello", "world");
    EXPECT_EQ(7 * 6, 42);
}
