#include "bigger_is_greater.hpp"

/*
 * Returns a next bigger integer than k in arr.
 */

int findNextBigger(vector<int> arr, int s, int e, int k)
{
    if (s >= e)
    {
        if (arr[s] <= k)
        {
            return s + 1;
        }
        else
        {
            return s;
        }
    }

    int m = (s + e) / 2;
    if (k < arr[m])
    {
        return findNextBigger(arr, s, m - 1, k);
    }
    else
    {
        return findNextBigger(arr, m + 1, e, k);
    }
}

/*
 * Complete the 'biggerIsGreater' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING w as parameter.
 */

string biggerIsGreater(string w)
{
    int n = w.length();

    if (n <= 1)
    {
        return "no answer";
    }

    // Convert a string to an integer array.
    vector<int> arr;
    for (auto c : w)
    {
        arr.push_back(static_cast<int>(c));
    }

    int i = n - 2;
    for (; i >= 0; --i)
    {
        if (arr[i] < arr[i + 1])
        {
            break;
        }
    }

    if (i == -1)
    {
        return "no answer";
    }
    else
    {
        // sort i + 1 to n - 1
        sort(arr.begin() + i + 1, arr.end());
        int j = findNextBigger(arr, i + 1, n - 1, arr[i]);
        // Swap items.
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    // Convert the integer array to string.
    string result = "";
    for (auto k : arr)
    {
        result += static_cast<char>(k);
    }

    if (result.compare(w) == 0)
    {
        return "no answer";
    }

    return result;
}