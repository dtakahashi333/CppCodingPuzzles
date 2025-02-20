#include <iostream>
#include <string>
#include <fstream>

#include "gtest/gtest.h"

#include "src/bigger_is_greater.hpp"

using namespace std;

TEST(TestBiggerIsGreater, TestCase00)
{
    string s = {"ab"};
    string expected = "ba";
    EXPECT_STREQ(biggerIsGreater(s).c_str(), expected.c_str());
}

TEST(TestBiggerIsGreater, TestCase01)
{
    string s = "bb";
    string expected = "no answer";
    EXPECT_STREQ(biggerIsGreater(s).c_str(), expected.c_str());
}

TEST(TestBiggerIsGreater, TestCase02)
{
    string s = "hefg";
    string expected = "hegf";
    EXPECT_STREQ(biggerIsGreater(s).c_str(), expected.c_str());
}

TEST(TestBiggerIsGreater, TestCase03)
{
    string s = "dhck";
    string expected = "dhkc";
    EXPECT_STREQ(biggerIsGreater(s).c_str(), expected.c_str());
}

TEST(TestBiggerIsGreater, TestCase04)
{
    string s = "dkhc";
    string expected = "hcdk";
    EXPECT_STREQ(biggerIsGreater(s).c_str(), expected.c_str());
}

TEST(TestBiggerIsGreater, TestCase05)
{
    string s = "lmno";
    string expected = "lmon";
    EXPECT_STREQ(biggerIsGreater(s).c_str(), expected.c_str());
}

TEST(TestBiggerIsGreater, TestCase06)
{
    string s = "dcba";
    string expected = "no answer";
    EXPECT_STREQ(biggerIsGreater(s).c_str(), expected.c_str());
}

TEST(TestBiggerIsGreater, TestCase07)
{
    string s = "dcbb";
    string expected = "no answer";
    EXPECT_STREQ(biggerIsGreater(s).c_str(), expected.c_str());
}

TEST(TestBiggerIsGreater, TestCase08)
{
    string s = "abdc";
    string expected = "acbd";
    EXPECT_STREQ(biggerIsGreater(s).c_str(), expected.c_str());
}

TEST(TestBiggerIsGreater, TestCase09)
{
    string s = "abcd";
    string expected = "abdc";
    EXPECT_STREQ(biggerIsGreater(s).c_str(), expected.c_str());
}

TEST(TestBiggerIsGreater, TestCase10)
{
    string s = "fedcbabcd";
    string expected = "fedcbabdc";
    EXPECT_STREQ(biggerIsGreater(s).c_str(), expected.c_str());
}

// TEST(TestBiggerIsGreater, TestCase11)
// {
//     string input_file_path = "test/data/bigger_is_greater/input01.txt";
//     ifstream input_file(input_file_path);
//     ASSERT_TRUE(input_file.is_open()) << "Failed to open file: " << input_file_path;

//     string answer_file_path = "test/data/bigger_is_greater/output01.txt";
//     ifstream answer_file(answer_file_path);
//     ASSERT_TRUE(answer_file.is_open()) << "Failed to open file: " << answer_file_path;

//     int t;
//     input_file >> t; // Get the number of test cases.
//     for (int i = 0; i < t; ++i)
//     {
//         string w, a;
//         input_file >> w;
//         answer_file >> a;
//         EXPECT_STREQ(biggerIsGreater(w).c_str(), a.c_str());
//     }
// }
