#include "sherlock_and_squares.hpp"

/*
 * Complete the 'squares' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER a
 *  2. INTEGER b
 */

int squares(int a, int b)
{
    // int c = static_cast<int>(ceil(sqrt(a)));
    // int d = static_cast<int>(floor(sqrt(b)));
    // return d - c + 1;

    // Not using any C math function.
    int count = 0;
    for (int i = 1; i * i <= b; ++i) {
        if (i * i >= a && i * i <= b) {
            count++;
        }
    }
    return count;
}