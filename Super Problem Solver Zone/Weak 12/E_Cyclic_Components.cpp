#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<int> par, rnk, siz;
    DSU(int n) : par(n + 1), rnk(n + 1, 0), siz(n + 1, 1)
    {
        for (int i = 1; i <= n; i++)
        {
            par[i] = i;
        }
    }
    int find(int i)
    {
        if (par[i] == i)
        {
            return i;
        }
        else
        {
            return par[i] = find(par[i]);
        }
    }
    bool same(int u, int v)
    {
        return find(u) == find(v);
    }
    void merge(int u, int v)
    {
        u = find(u);
        v = find(v);
        if (u == v)
        {
            return;
        }
        if (rnk[u] < rnk[v])
        {
            swap(u, v);
        }
        else if (rnk[u] == rnk[v])
        {
            rnk[u]++;
        }
        par[v] = u;
        siz[u] += siz[v];
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    DSU dsu(n);
    vector<int> deg(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        dsu.merge(u, v);
        deg[u]++;
        deg[v]++;
    }

    unordered_map<int, vector<int>> comp;
    for (int i = 1; i <= n; i++)
    {
        comp[dsu.find(i)].push_back(i);
    }

    int ans = 0;
    for (auto it = comp.begin(); it != comp.end(); it++)
    {
        vector<int> &nodes = it->second;
        if ((int)nodes.size() < 3)
        {
            continue;
        }
        bool ok = true;
        for (int j = 0; j < (int)nodes.size(); j++)
        {
            if (deg[nodes[j]] != 2)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            ans++;
        }
    }

    cout << ans << "\n";
    return 0;
}
