#include "acm_icpc_team.hpp"

/*
 * Complete the 'acmTeam' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY topic as parameter.
 */

vector<int> acmTeam(vector<string> topic)
{
    int n = topic.size();
    int m = topic[0].length();

    map<int, vector<pair<int, int>>> num_of_topics;
    int max_count = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int count = 0;
            for (int k = 0; k < m; ++k)
            {
                if (topic[i][k] == '1' || topic[j][k] == '1')
                {
                    count++;
                }
            }

            if (count > max_count)
            {
                max_count = count;
            }
            num_of_topics[count].push_back(pair<int, int>(i, j));
        }
    }

    vector<int> output;
    output.push_back(max_count);
    output.push_back(num_of_topics[max_count].size());
    return output;
}
