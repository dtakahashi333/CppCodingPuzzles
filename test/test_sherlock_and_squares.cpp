#include <iostream>
#include <fstream>

#include "gtest/gtest.h"

#include "src/sherlock_and_squares.hpp"

using namespace std;

TEST(TestAppendAndDelete, TestCase00)
{
    int a = 24;
    int b = 49;
    int expected = 3;
    EXPECT_EQ(squares(a, b), 3);
}
