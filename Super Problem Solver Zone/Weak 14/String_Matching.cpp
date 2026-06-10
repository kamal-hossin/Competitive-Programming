#include <bits/stdc++.h>
using namespace std;

void computeLPSArray(const string &pattern, vector<int> &lps)
{
    int m = pattern.length();
    int length = 0;
    lps[0] = 0;
    int i = 1;

    while (i < m)
    {
        if (pattern[i] == pattern[length])
        {
            length++;
            lps[i] = length;
            i++;
        }
        else
        {
            if (length != 0)
            {
                length = lps[length - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string text, pattern;
    cin >> text >> pattern;

    int n = text.length();
    int m = pattern.length();

    if (m > n)
    {
        cout << 0 << endl;
        return 0;
    }

    vector<int> lps(m);
    computeLPSArray(pattern, lps);

    int count = 0;
    int i = 0, j = 0;

    while (i < n)
    {
        if (pattern[j] == text[i])
        {
            i++;
            j++;
        }

        if (j == m)
        {
            count++;
            j = lps[j - 1];
        }
        else if (i < n && pattern[j] != text[i])
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
