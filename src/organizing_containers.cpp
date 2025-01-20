// Organizing Containers of Balls
// https://www.hackerrank.com/challenges/organizing-containers-of-balls/problem?isFullScreen=false
#include "organizing_containers.hpp"

/*
 * Complete the 'organizingContainers' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts 2D_INTEGER_ARRAY container as parameter.
 */

string organizingContainers(vector<vector<int>> container)
{
    int n = container.size();
    int m = container[0].size();

    // Count balls.
    vector<int> capacity(n, 0);   // each container capacity.
    vector<int> ball_count(m, 0); // each ball count.

    for (int i = 0; i < container.size(); ++i)
    {
        for (int j = 0; j < container[i].size(); ++j)
        {
            capacity[i] += container[i][j];
            ball_count[j] += container[i][j];
        }
    }

    for (int j = 0; j < m; ++j)
    {
        auto it = find(capacity.begin(), capacity.end(), ball_count[j]);
        if (it == capacity.end())
        {
            return "Impossible";
        }
        else
        {
            capacity.erase(it);
        }
    }

    if (capacity.size() == 0)
    {
        return "Possible";
    }
    else
    {
        return "Impossible";
    }
}