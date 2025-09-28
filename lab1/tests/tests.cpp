#include <gtest/gtest.h>
#include <solution.hpp>

TEST(CalcOnesTest, Range2To7) {
    ASSERT_EQ(calc_ones(2, 7), 11);
}

TEST(CalcOnesTest, Range1To16) {
    ASSERT_EQ(calc_ones(1, 16), 33);
}

TEST(CalcOnesTest, SingleNumber7) {
    ASSERT_EQ(calc_ones(7, 7), 3);
}

TEST(CalcOnesTest, SingleNumber0) {
    ASSERT_EQ(calc_ones(0, 0), 0);
}

TEST(CalcOnesTest, Range1To4) {
    ASSERT_EQ(calc_ones(1, 4), 5);
}

TEST(CalcOnesTest, Range5To10) {
    ASSERT_EQ(calc_ones(5, 10), 12);
}

TEST(CalcOnesTest, Range6To13) {
    ASSERT_EQ(calc_ones(6, 13), 18);
}

TEST(CalcOnesTest, Range14To16) {
    ASSERT_EQ(calc_ones(14, 16), 8);
}

TEST(CalcOnesTest, Range7To8) {
    ASSERT_EQ(calc_ones(7, 8), 4);
}

TEST(CalcOnesTest, Range31To32) {
    ASSERT_EQ(calc_ones(31, 32), 6);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
