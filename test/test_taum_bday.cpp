#include <iostream>
#include <fstream>

#include "gtest/gtest.h"

#include "src/taum_bday.hpp"

using namespace std;

TEST(TestTaumBday, TestCase00)
{
    int b = 3, w = 5;
    int bc = 3, wc = 4, z = 1;
    int expected = 29;
    EXPECT_EQ(taumBday(b, w, bc, wc, z), expected);
}

TEST(TestTaumBday, TestCase01)
{
    int b = 10, w = 10;
    int bc = 1, wc = 1, z = 1;
    int expected = 20;
    EXPECT_EQ(taumBday(b, w, bc, wc, z), expected);
}

TEST(TestTaumBday, TestCase02)
{
    int b = 5, w = 9;
    int bc = 2, wc = 3, z = 4;
    int expected = 37;
    EXPECT_EQ(taumBday(b, w, bc, wc, z), expected);
}

TEST(TestTaumBday, TestCase03)
{
    int b = 3, w = 6;
    int bc = 9, wc = 1, z = 1;
    int expected = 12;
    EXPECT_EQ(taumBday(b, w, bc, wc, z), expected);
}

TEST(TestTaumBday, TestCase04)
{
    int b = 7, w = 7;
    int bc = 4, wc = 2, z = 1;
    int expected = 35;
    EXPECT_EQ(taumBday(b, w, bc, wc, z), expected);
}

TEST(TestTaumBday, TestCase05)
{
    int b = 3, w = 3;
    int bc = 1, wc = 9, z = 2;
    int expected = 12;
    EXPECT_EQ(taumBday(b, w, bc, wc, z), expected);
}

TEST(TestTaumBday, TestCase06)
{
    string input_file_path = "test/data/taum_bday/input05.txt";
    ifstream input_file(input_file_path);
    ASSERT_TRUE(input_file.is_open()) << "Failed to open file: " << input_file_path;

    string answer_file_path = "test/data/taum_bday/output05.txt";
    ifstream answer_file(answer_file_path);
    ASSERT_TRUE(answer_file.is_open()) << "Failed to open file: " << answer_file_path;

    int t;
    input_file >> t;
    for (int i = 0; i < t; ++i)
    {
        int b, w, bc, wc, z;
        input_file >> b >> w >> bc >> wc >> z;
        long expected;
        answer_file >> expected;
        EXPECT_EQ(taumBday(b, w, bc, wc, z), expected) << "Failed test case: " << i + 1;
    }
}
