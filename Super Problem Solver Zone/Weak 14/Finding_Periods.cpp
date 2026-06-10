#include <bits/stdc++.h>
using namespace std;

vector<int> compute_pi(const string &s)
{
    int n = s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++)
    {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
        {
            j = pi[j - 1];
        }
        if (s[i] == s[j])
        {
            j++;
        }
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
    int n = s.length();

    vector<int> pi = compute_pi(s);
    vector<int> periods;

    int border_length = pi[n - 1];
    while (border_length > 0)
    {
        periods.push_back(n - border_length);
        border_length = pi[border_length - 1];
    }

    periods.push_back(n);
    sort(periods.begin(), periods.end());

    for (int i = 0; i < (int)periods.size(); i++)
    {
        cout << periods[i];
        if (i + 1 < (int)periods.size())
        {
            cout << " ";
        }
    }
    cout << "\n";

    return 0;
}
