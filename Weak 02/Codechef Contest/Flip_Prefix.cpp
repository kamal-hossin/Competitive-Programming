#include <bits/stdc++.h>
using namespace std;
set<string> results;

string flipPrefix(string s, int x)
{
    for (int i = 0; i < x; ++i)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        }
        else
        {
            s[i] = '0';
        }
    }
    return s;
}

void dfs(string s)
{
    if (results.count(s))
        return;

    results.insert(s);

    int count0 = 0, count1 = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '0')
            count0++;
        else
            count1++;

        if (count0 == count1)
        {
            string flipped = flipPrefix(s, i + 1);
            dfs(flipped);
        }
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        results.clear();

        dfs(s);

        cout << results.size() << endl;
    }

    return 0;
}
