// https://www.hackerrank.com/challenges/find-digits/problem?isFullScreen=true
#include "find_digits.hpp"

/*
 * Complete the 'findDigits' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int findDigits(int n)
{
    int count = 0;
    int q = n;
    do
    {
        int r = q % 10;
        q /= 10;
        if (r != 0 && n % r == 0)
        {
            count++;
        }
    } while (q > 0);

    return count;
}