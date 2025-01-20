#include <iostream>
#include <fstream>

#include "gtest/gtest.h"

#include "src/non_divisible_subset.hpp"

using namespace std;

TEST(TestNonDivisibleSubset, TestCase00)
{
    vector<int> s = {19, 10, 12, 10, 24, 25, 22};
    int k = 4;
    int a = 3;
    EXPECT_EQ(nonDivisibleSubset(k, s), a);
}

TEST(TestNonDivisibleSubset, TestCase01)
{
    vector<int> s = {1, 7, 2, 4};
    int k = 3;
    int a = 3;
    EXPECT_EQ(nonDivisibleSubset(k, s), a);
}

TEST(TestNonDivisibleSubset, TestCase02)
{
    vector<int> s = {278, 576, 496, 727, 410, 124, 338, 149, 209, 702, 282, 718, 771, 575, 436};
    int k = 7;
    int a = 11;
    EXPECT_EQ(nonDivisibleSubset(k, s), a);
}
