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

    int n, m1, m2;
    cin >> n >> m1 >> m2;

    DSU dsu1(n), dsu2(n);

    for (int i = 0; i < m1; i++)
    {
        int u, v;
        cin >> u >> v;
        dsu1.merge(u, v);
    }

    for (int i = 0; i < m2; i++)
    {
        int u, v;
        cin >> u >> v;
        dsu2.merge(u, v);
    }

    vector<pair<int, int>> ans;

    for (int u = 1; u <= n; u++)
    {
        for (int v = u + 1; v <= n; v++)
        {
            if (!dsu1.same(u, v) && !dsu2.same(u, v))
            {
                ans.push_back({u, v});
                dsu1.merge(u, v);
                dsu2.merge(u, v);
            }
        }
    }

    cout << ans.size() << "\n";
    for (int i = 0; i < (int)ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << "\n";
    }

    return 0;
}
