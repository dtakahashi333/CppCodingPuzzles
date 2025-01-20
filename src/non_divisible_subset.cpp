// Non-Divisible Subset
// https://www.hackerrank.com/challenges/non-divisible-subset/problem?isFullScreen=false
#include "non_divisible_subset.hpp"

// Function declaration
int nonDivisibleSubsetHelperByMemoization(int k, vector<int> s, int ind, int remainder, vector<vector<int>> dp);
int nonDivisibleSubsetHelperByBruteForce(int k, vector<int> s, int ind, vector<int> subset);

/*
 * Complete the 'nonDivisibleSubset' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY s
 */

int nonDivisibleSubset(int k, vector<int> s)
{
    // Create a remainder counter.
    // By considering two numbers, if the sum of their remainders is divisible by k,
    // the sum of their original numbers is divisible by k, as well.
    // When creating a remainder list which doesn't include 0, the sum of the 1st value
    // and the last value becomes k. Similarly, the sum of the 2nd value and
    // the 2nd from the last value becomes k because of its symmetricity. In other words,
    // if we pick any of those values, we cannot pick any of their symmetry counterparts.
    // So just pick the larger number of those pairs.
    vector<int> remainders(k, 0);
    for (auto x : s)
    {
        remainders[x % k]++;
    }
    // for (auto x : remainders)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    int counter = 0;
    // If the count of remainders[0] is more than 0, we can count it as 1 but not more than 1
    // because their some becomes divisible by k.
    if (remainders[0] > 0)
    {
        counter++;
    }
    // cout << counter << endl;
    // If k is even number, which means the range of its remainders is from 1 to k-1 if it
    // doesn't include 0, there exists a middle. If the count of it is more than 0, we can
    // count it as 1 as the same reason for remainder 0.
    if (k % 2 == 0 && remainders[k / 2] > 0)
    {
        counter++;
    }
    // cout << counter << endl;
    // Now check the symmetry to add the larger numbder to the counter.
    for (int i = 1; i <= k / 2; ++i)
    {
        if (i < k - i)
        {
            if (remainders[i] > remainders[k - i])
            {
                counter += remainders[i];
            }
            else
            {
                counter += remainders[k - i];
            }
        }
        // cout << counter << endl;
    }
    return counter;
}

int nonDivisibleSubsetByBruteForce(int k, vector<int> s)
{
    int n = s.size();
    vector<int> subset;
    return nonDivisibleSubsetHelperByBruteForce(k, s, n - 1, subset);
}

int nonDivisibleSubsetHelperByBruteForce(int k, vector<int> s, int ind, vector<int> subset)
{
    if (ind < 0)
    {
        return 0;
    }

    // Not take
    int not_take = nonDivisibleSubsetHelperByBruteForce(k, s, ind - 1, subset);

    bool divisible_by_k = false;
    for (auto x : subset)
    {
        if ((s[ind] + x) % k == 0)
        {
            divisible_by_k = true;
            break;
        }
    }

    int take = INT_MIN;
    if (!divisible_by_k)
    {
        subset.push_back(s[ind]);
        take = 1 + nonDivisibleSubsetHelperByBruteForce(k, s, ind - 1, subset);
    }

    return max(not_take, take);
}
