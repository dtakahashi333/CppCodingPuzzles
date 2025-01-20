#include "append_and_delete.hpp"

string appendAndDelete(string s, string t, int k)
{
    int n = s.length();
    int m = t.length();
    int i = 0;
    for (; i < n && i < m; ++i)
    {
        if (s[i] != t[i])
        {
            break;
        }
    }
    int deletion = n - i;
    int append = m - i;
    if (deletion + append > k)
    {
        return "No";
    }
    else if (deletion + append < k)
    {
        if ((k - deletion - append) > 2 * i || (k - deletion - append) % 2 == 0)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
    }
    else // if (deletion + append == k)
    {
        return "Yes";
    }
}