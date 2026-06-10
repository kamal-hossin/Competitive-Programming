#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> g[N];
int color[N];

void dfs(int u, int c)
{
    color[u] = c;
    for (int v : g[u])
    {
        if (color[v] == -1)
        {
            dfs(v, 1 - c);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        g[i].clear();
        color[i] = -1;
    }

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0);

    long long count0 = 0, count1 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (color[i] == 0)
            count0++;
        else
            count1++;
    }

    long long max_edges = count0 * count1;
    long long result = max_edges - (n - 1);

    cout << result << endl;

    return 0;
}
