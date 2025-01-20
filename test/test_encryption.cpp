#include <iostream>
#include <string>

#include "gtest/gtest.h"

#include "src/encryption.hpp"

using namespace std;

TEST(TestEncryption, TestCase00)
{
    string s = "if man was meant to stay on the ground god would have given us roots";
    string expected = "imtgdvs fearwer mayoogo anouuio ntnnlvt wttddes aohghn sseoau";
    EXPECT_STREQ(encryption(s).c_str(), expected.c_str());
}

TEST(TestEncryption, TestCase01)
{
    string s = "haveaniceday";
    string expected = "hae and via ecy";
    EXPECT_STREQ(encryption(s).c_str(), expected.c_str());
}

TEST(TestEncryption, TestCase02)
{
    string s = "feedthedog";
    string expected = "fto ehg ee dd";
    EXPECT_STREQ(encryption(s).c_str(), expected.c_str());
}

TEST(TestEncryption, TestCase03)
{
    string s = "chillout";
    string expected = "clu hlt io";
    EXPECT_STREQ(encryption(s).c_str(), expected.c_str());
}
