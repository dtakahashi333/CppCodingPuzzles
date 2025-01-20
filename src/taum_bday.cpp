// Taum and B'day
// https://www.hackerrank.com/challenges/taum-and-bday/problem?isFullScreen=false
#include "taum_bday.hpp"

/*
 * Complete the 'taumBday' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER b
 *  2. INTEGER w
 *  3. INTEGER bc
 *  4. INTEGER wc
 *  5. INTEGER z
 */

long taumBday(int b, int w, int bc, int wc, int z)
{
    if (bc < wc)
    {
        if (wc - bc <= z)
        {
            return static_cast<long>(b) * bc + static_cast<long>(w) * wc;
        }
        else
        {
            return static_cast<long>(bc) * (b + w) + static_cast<long>(w) * z;
        }
    }
    else if (bc > wc)
    {
        if (bc - wc <= z)
        {
            return static_cast<long>(b) * bc + static_cast<long>(w) * wc;
        }
        else
        {
            return static_cast<long>(wc) * (b + w) + static_cast<long>(b) * z;
        }
    }
    else
    {
        return static_cast<long>(b) * bc + static_cast<long>(w) * wc;
    }
}

// Simpler solution: https://youtu.be/T9sxEzAbp-M
// long taumBday(int b, int w, int bc, int wc, int z)
// {
//     long bp = min(bc, wc + z);
//     long wp = min(wc, bc + z);
//     return bp * b + wp * w;
// }