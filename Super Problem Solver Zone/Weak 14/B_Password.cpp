#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(const string &s)
{
    int n = s.size();
    vector<int> pi(n);
    for (int i = 1; i < n; i++)
    {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
        {
            j = pi[j - 1];
        }
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> pi = prefix_function(s);
    int n = s.size();

    int len = pi[n - 1];
    if (len == 0)
    {
        cout << "Just a legend\n";
        return 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (pi[i] == len)
        {
            cout << s.substr(0, len) << "\n";
            return 0;
        }
    }

    len = pi[len - 1];
    if (len > 0)
    {
        cout << s.substr(0, len) << "\n";
    }
    else
    {
        cout << "Just a legend\n";
    }

    return 0;
}
