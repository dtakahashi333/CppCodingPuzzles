#include <iostream>
#include <fstream>

#include "gtest/gtest.h"

#include "src/jumping_on_clouds.hpp"

using namespace std;

TEST(TestJumpingOnClouds, TestCase00)
{
    vector<int> c = {0, 0, 1, 0, 0, 1, 0};
    int a = 4;
    EXPECT_EQ(jumpingOnClouds(c), a);
}

TEST(TestJumpingOnClouds, TestCase01)
{
    vector<int> c = {0, 0, 1, 0, 0, 1, 0};
    int a = 4;
    EXPECT_EQ(jumpingOnCloudsByTabulation(c), a);
}

TEST(TestJumpingOnClouds, TestCase02)
{
    vector<int> c = {0, 0, 1, 0, 0, 1, 0};
    int a = 4;
    EXPECT_EQ(jumpingOnCloudsByGreedy(c), a);
}
