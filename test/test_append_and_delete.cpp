#include <iostream>
#include <fstream>

#include "gtest/gtest.h"

#include "src/append_and_delete.hpp"

using namespace std;

TEST(TestAppendAndDelete, TestCase00)
{
    string input_file_path = "test/data/append_and_delete/input00.txt";
    ifstream input_file(input_file_path);
    ASSERT_TRUE(input_file.is_open()) << "Failed to open file: " << input_file_path;

    string answer_file_path = "test/data/append_and_delete/output00.txt";
    ifstream answer_file(answer_file_path);
    ASSERT_TRUE(answer_file.is_open()) << "Failed to open file: " << answer_file_path;

    string s, t;
    getline(input_file, s);
    getline(input_file, t);
    int k;
    input_file >> k;
    string a;
    getline(answer_file, a);
    EXPECT_STREQ(appendAndDelete(s, t, k).c_str(), a.c_str());
}

TEST(TestAppendAndDelete, TestCase01)
{
    string input_file_path = "test/data/append_and_delete/input01.txt";
    ifstream input_file(input_file_path);
    ASSERT_TRUE(input_file.is_open()) << "Failed to open file: " << input_file_path;

    string answer_file_path = "test/data/append_and_delete/output01.txt";
    ifstream answer_file(answer_file_path);
    ASSERT_TRUE(answer_file.is_open()) << "Failed to open file: " << answer_file_path;

    string s, t;
    getline(input_file, s);
    getline(input_file, t);
    int k;
    input_file >> k;
    string a;
    getline(answer_file, a);
    EXPECT_STREQ(appendAndDelete(s, t, k).c_str(), a.c_str());
}

TEST(TestAppendAndDelete, TestCase02)
{
    string input_file_path = "test/data/append_and_delete/input02.txt";
    ifstream input_file(input_file_path);
    ASSERT_TRUE(input_file.is_open()) << "Failed to open file: " << input_file_path;

    string answer_file_path = "test/data/append_and_delete/output02.txt";
    ifstream answer_file(answer_file_path);
    ASSERT_TRUE(answer_file.is_open()) << "Failed to open file: " << answer_file_path;

    string s, t;
    getline(input_file, s);
    getline(input_file, t);
    int k;
    input_file >> k;
    string a;
    getline(answer_file, a);
    EXPECT_STREQ(appendAndDelete(s, t, k).c_str(), a.c_str());
}

TEST(TestAppendAndDelete, TestCase05)
{
    string input_file_path = "test/data/append_and_delete/input05.txt";
    ifstream input_file(input_file_path);
    ASSERT_TRUE(input_file.is_open()) << "Failed to open file: " << input_file_path;

    string answer_file_path = "test/data/append_and_delete/output05.txt";
    ifstream answer_file(answer_file_path);
    ASSERT_TRUE(answer_file.is_open()) << "Failed to open file: " << answer_file_path;

    string s, t;
    getline(input_file, s);
    getline(input_file, t);
    int k;
    input_file >> k;
    string a;
    getline(answer_file, a);
    EXPECT_STREQ(appendAndDelete(s, t, k).c_str(), a.c_str());
}

TEST(TestAppendAndDelete, TestCase09)
{
    string input_file_path = "test/data/append_and_delete/input09.txt";
    ifstream input_file(input_file_path);
    ASSERT_TRUE(input_file.is_open()) << "Failed to open file: " << input_file_path;

    string answer_file_path = "test/data/append_and_delete/output09.txt";
    ifstream answer_file(answer_file_path);
    ASSERT_TRUE(answer_file.is_open()) << "Failed to open file: " << answer_file_path;

    string s, t;
    getline(input_file, s);
    getline(input_file, t);
    int k;
    input_file >> k;
    string a;
    getline(answer_file, a);
    EXPECT_STREQ(appendAndDelete(s, t, k).c_str(), a.c_str());
}

TEST(TestAppendAndDelete, TestCase10)
{
    string input_file_path = "test/data/append_and_delete/input10.txt";
    ifstream input_file(input_file_path);
    ASSERT_TRUE(input_file.is_open()) << "Failed to open file: " << input_file_path;

    string answer_file_path = "test/data/append_and_delete/output10.txt";
    ifstream answer_file(answer_file_path);
    ASSERT_TRUE(answer_file.is_open()) << "Failed to open file: " << answer_file_path;

    string s, t;
    getline(input_file, s);
    getline(input_file, t);
    int k;
    input_file >> k;
    string a;
    getline(answer_file, a);
    EXPECT_STREQ(appendAndDelete(s, t, k).c_str(), a.c_str());
}