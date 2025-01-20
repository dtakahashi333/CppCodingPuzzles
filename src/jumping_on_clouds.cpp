// Jumping on the Clouds
// https://www.hackerrank.com/challenges/jumping-on-the-clouds/forum
#include "jumping_on_clouds.hpp"

int jumpingOnCloudsHelper(vector<int> c, int ind, vector<int> dp);

/*
 * Complete the 'jumpingOnClouds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY c as parameter.
 */

int jumpingOnClouds(vector<int> c)
{
    // Although I solve it in the dp way, it should be solved in a greedy way, too.
    int n = c.size();
    vector<int> dp(n, -1);
    return jumpingOnCloudsHelper(c, n - 1, dp);
}

int jumpingOnCloudsHelper(vector<int> c, int ind, vector<int> dp)
{
    if (ind == 0)
    {
        return 0;
    }

    if (dp[ind] != -1)
    {
        return dp[ind];
    }

    dp[ind] = INT_MAX;
    if (c[ind] == 0)
    {
        int one_jump = INT_MAX;
        if (ind - 1 >= 0 && c[ind - 1] == 0)
        {
            one_jump = 1 + jumpingOnCloudsHelper(c, ind - 1, dp);
        }
        int two_jump = INT_MAX;
        if (ind - 2 >= 0 && c[ind - 2] == 0)
        {
            two_jump = 1 + jumpingOnCloudsHelper(c, ind - 2, dp);
        }
        dp[ind] = min(one_jump, two_jump);
    }

    return dp[ind];
}

int jumpingOnCloudsByTabulation(vector<int> c)
{
    int n = c.size();
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i < n; ++i)
    {
        if (c[i] == 0)
        {
            int one_jump = INT_MAX;
            if (i - 1 >= 0 && c[i - 1] == 0)
            {
                one_jump = 1 + dp[i - 1];
            }
            int two_jump = INT_MAX;
            if (i - 2 >= 0 && c[i - 2] == 0)
            {
                two_jump = 1 + dp[i - 2];
            }
            dp[i] = min(one_jump, two_jump);
        }
    }
    return dp[n - 1];
}

int jumpingOnCloudsByGreedy(vector<int> c)
{
    int n = c.size();
    int i = 0, count = 0;
    while (i < n - 1)
    {
        if (c[i + 2] == 0)
        {
            i += 2;
        }
        else if (c[i + 1] == 0)
        {
            i++;
        }
        else
        {
            return -1;
        }
        count++;
    }
    return count;
}