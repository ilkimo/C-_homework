
#include "gtest/gtest.h"
#include "CipCiop.h"
#include <vector>

TEST(ExampleTest, CipCiopNormalScenario) {
    vector<std::string> solution = CipCiop(4, 2, 1, 4).solve();

    EXPECT_EQ("1", solution[0]);
    EXPECT_EQ("Ciop", solution[1]);
    EXPECT_EQ("3", solution[2]);
    EXPECT_EQ("CipCiop", solution[3]);
}

TEST(ExampleTest, CipCiopLimitCaseNegativeToPositive) {
    vector<std::string> solution = CipCiop(2, 3, -3, 2).solve();

    EXPECT_EQ("Ciop", solution[0]);
    EXPECT_EQ("Cip", solution[1]);
    EXPECT_EQ("-1", solution[2]);
    EXPECT_EQ("CipCiop", solution[3]); // (0 % number == 0)
    EXPECT_EQ("1", solution[4]);
    EXPECT_EQ("Cip", solution[5]);
}