#include <iostream>
#include <fstream>

#include "gtest/gtest.h"

#include "src/library_fine.hpp"

using namespace std;

TEST(TestAppendAndDelete, TestCase00)
{
    string input_file_path = "test/data/library_fine/input05.txt";
    ifstream input_file(input_file_path);
    ASSERT_TRUE(input_file.is_open()) << "Failed to open file: " << input_file_path;

    string answer_file_path = "test/data/library_fine/output05.txt";
    ifstream answer_file(answer_file_path);
    ASSERT_TRUE(answer_file.is_open()) << "Failed to open file: " << answer_file_path;

    int d1, m1, y1, d2, m2, y2;
    input_file >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    int a;
    answer_file >> a;
    EXPECT_EQ(libraryFine(d1, m1, y1, d2, m2, y2), a);
}
