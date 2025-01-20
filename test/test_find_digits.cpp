#include <iostream>
#include <fstream>

#include "gtest/gtest.h"
// https://stackoverflow.com/questions/71826978/why-cant-my-programs-find-resource-files-when-using-bazel-run-package
// #include "tools/cpp/runfiles/runfiles.h"

#include "src/find_digits.hpp"

using namespace std;
// using bazel::tools::cpp::runfiles::Runfiles;

TEST(TestFindDigits, TestCase01)
{
    // string error;
    // unique_ptr<Runfiles> runfiles(Runfiles::Create("my_test_package", &error));
    // ASSERT_TRUE(runfiles) << error;

    // string input_file_path = runfiles->Rlocation("input01.txt");
    // ifstream input_file(input_file_path);
    // ASSERT_TRUE(input_file.is_open()) << "Failed to open file: " << input_file_path;

    string input_file_path = "test/data/find_digits/input01.txt";
    ifstream input_file(input_file_path);
    ASSERT_TRUE(input_file.is_open()) << "Failed to open file: " << input_file_path;

    string answer_file_path = "test/data/find_digits/output01.txt";
    ifstream answer_file(answer_file_path);
    ASSERT_TRUE(answer_file.is_open()) << "Failed to open file: " << answer_file_path;

    int t;
    input_file >> t; // Get the number of test cases.
    vector<int> answer, output;
    for (int i = 0; i < t; ++i)
    {
        int n, a;
        input_file >> n;
        answer_file >> a;
        EXPECT_EQ(findDigits(n), a);
    }
}