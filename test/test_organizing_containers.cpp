#include <iostream>
#include <fstream>

#include "gtest/gtest.h"

#include "src/organizing_containers.hpp"

using namespace std;

TEST(TestOrganizingContainer, TestCase00)
{
    vector<vector<int>> container = {{1, 4}, {2, 3}};
    string expected = "Impossible";
    EXPECT_STREQ(organizingContainers(container).c_str(), expected.c_str());
}

TEST(TestOrganizingContainer, TestCase01)
{
    vector<vector<int>> container = {{1, 1}, {1, 1}};
    string expected = "Possible";
    EXPECT_STREQ(organizingContainers(container).c_str(), expected.c_str());
}

TEST(TestOrganizingContainer, TestCase02)
{
    vector<vector<int>> container = {{0, 2}, {1, 1}};
    string expected = "Impossible";
    EXPECT_STREQ(organizingContainers(container).c_str(), expected.c_str());
}

TEST(TestOrganizingContainer, TestCase03)
{
    vector<vector<int>> container = {{1, 3, 1}, {2, 1, 2}, {3, 3, 3}};
    string expected = "Impossible";
    EXPECT_STREQ(organizingContainers(container).c_str(), expected.c_str());
}

TEST(TestOrganizingContainer, TestCase04)
{
    vector<vector<int>> container = {{0, 2, 1}, {1, 1, 1}, {2, 0, 0}};
    string expected = "Possible";
    EXPECT_STREQ(organizingContainers(container).c_str(), expected.c_str());
}
