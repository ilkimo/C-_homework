
#include "gtest/gtest.h"
#include "MissingNumbers.h"

TEST(TestMissingNumbers, test) {
    int x = MissingNumbers().returnOne();
    EXPECT_EQ(x, 1);

    x++;
    EXPECT_GE(x, 1);
}