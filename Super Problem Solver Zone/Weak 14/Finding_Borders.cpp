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
    int n = s.size();

    vector<int> pi = prefix_function(s);
    vector<int> borders;

    int k = pi[n - 1];
    while (k > 0)
    {
        borders.push_back(k);
        k = pi[k - 1];
    }

    sort(borders.begin(), borders.end());

    for (int i = 0; i < (int)borders.size(); i++)
    {
        cout << borders[i] << " ";
    }
    cout << "\n";

    return 0;
}
