#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
vector<pair<int, int>> g[N];
int ans[N];

void dfs(int x, int fa, int k)
{
    for (auto i : g[x])
    {
        if (i.first != fa)
        {
            if (k == 2)
            {
                ans[i.second] = 5;
                dfs(i.first, x, 5);
            }
            else
            {
                ans[i.second] = 2;
                dfs(i.first, x, 2);
            }
        }
    }
}

int main()
{
    int t, n, u, v, y;
    cin >> t;
    while (t--)
    {
        cin >> n;
        bool ok = true;
        for (int i = 1; i <= n; i++)
        {
            g[i].clear();
        }
        for (int i = 1; i < n; i++)
        {
            cin >> u >> v;
            g[u].push_back({v, i});
            g[v].push_back({u, i});
        }
        for (int i = 1; i <= n; i++)
        {
            int x = g[i].size();
            if (x > 2)
            {
                ok = false;
            }
            else if (x == 1)
            {
                y = i;
            }
        }
        if (ok)
        {
            dfs(y, 0, 2);
            for (int i = 1; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
