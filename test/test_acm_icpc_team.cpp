#include <iostream>
#include <fstream>

#include "gtest/gtest.h"

#include "src/acm_icpc_team.hpp"

using namespace std;

TEST(TestAcmIcpcTeam, TestCase00)
{
    vector<string> topics = {"10101", "11110", "00010"};
    vector<int> expected = {5, 1};
    EXPECT_EQ(acmTeam(topics), expected);
}

TEST(TestAcmIcpcTeam, TestCase01)
{
    vector<string> topics = {"10101", "11100", "11010", "00101"};
    vector<int> expected = {5, 2};
    EXPECT_EQ(acmTeam(topics), expected);
}
