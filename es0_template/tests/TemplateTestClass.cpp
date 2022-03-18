
#include "gtest/gtest.h"
#include "TemplateObject.h"

TEST(ExampleTest, DifficultSum) {
    int x = TemplateObject().returnOne();
    EXPECT_EQ(x, 1);

    x++;
    EXPECT_GE(x, 1);
}