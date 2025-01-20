// Encryption
// https://www.hackerrank.com/challenges/encryption/problem?isFullScreen=true
#include "encryption.hpp"

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s)
{
    // Original string length.
    int L = s.length();

    // Remove the spaces from the text.
    int i = 0;
    do
    {
        if (s[i] == ' ')
        {
            s.erase(i, 1);
            L = s.length();
        }
        else
        {
            i++;
        }
    } while (i < L);

    // Length without the spaces.
    L = s.length();
    int col = ceil(sqrt(L));

    vector<string> lines;
    i = 0;
    while (i + col < L)
    {
        lines.push_back(s.substr(i, col));
        i += col; // +1 for "\n"
    }
    // Remainder
    if (i < L)
    {
        lines.push_back(s.substr(i));
    }

    string encrypted = "";
    for (int j = 0; j < col; ++j)
    {
        if (j > 0)
        {
            encrypted += " ";
        }
        for (int k = 0; k < lines.size(); ++k)
        {
            if (lines[k].length() > j)
            {
                encrypted += lines[k][j];
            }
        }
    }

    cout << encrypted << endl;

    return encrypted;
}