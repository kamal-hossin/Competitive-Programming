#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<int> par, rnk, siz, mn, mx;

    DSU(int n)
        : par(n + 1), rnk(n + 1, 0), siz(n + 1, 1), mn(n + 1, -1), mx(n + 1, -1)
    {
        for (int i = 1; i <= n; i++)
        {
            par[i] = i;
            mn[i] = i;
            mx[i] = i;
        }
    }

    int find(int i)
    {
        return (par[i] == i) ? i : (par[i] = find(par[i]));
    }

    void merge(int u, int v)
    {
        u = find(u);
        v = find(v);
        if (u == v)
            return;
        if (rnk[u] < rnk[v])
            swap(u, v);
        if (rnk[u] == rnk[v])
            rnk[u]++;
        par[v] = u;
        siz[u] += siz[v];
        mn[u] = min(mn[u], mn[v]);
        mx[u] = max(mx[u], mx[v]);
    }

    tuple<int, int, int> get(int u)
    {
        u = find(u);
        return {mn[u], mx[u], siz[u]};
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    DSU dsu(n);

    for (int i = 1; i <= m; i++)
    {
        string query;
        cin >> query;
        if (query == "union")
        {
            int u, v;
            cin >> u >> v;
            dsu.merge(u, v);
        }
        else
        {
            int v;
            cin >> v;
            auto [mn, mx, sz] = dsu.get(v);
            cout << mn << " " << mx << " " << sz << "\n";
        }
    }
    return 0;
}
