#include "library_fine.hpp"

/*
 * Complete the 'libraryFine' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER d1
 *  2. INTEGER m1
 *  3. INTEGER y1
 *  4. INTEGER d2
 *  5. INTEGER m2
 *  6. INTEGER y2
 */

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
    if (y1 > y2)
    {
        return 10000;
    }
    else if (y1 < y2)
    {
        return 0;
    }
    else
    {
        if (m1 > m2)
        {
            return 500 * (m1 - m2);
        }
        else if (m1 < m2)
        {
            return 0;
        }
        else
        {
            if (d1 > d2)
            {
                return 15 * (d1 - d2);
            }
            else // d1 <= d2
            {
                return 0;
            }
        }
    }
}