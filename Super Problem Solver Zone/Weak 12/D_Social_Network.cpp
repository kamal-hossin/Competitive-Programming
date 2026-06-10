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

    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> edges(d);
    for (int i = 0; i < d; i++)
    {
        cin >> edges[i].first >> edges[i].second;
    }

    for (int i = 1; i <= d; i++)
    {
        DSU D(n);
        int extraEdge = 0;
        for (int j = 0; j < i; j++)
        {
            int u = edges[j].first, v = edges[j].second;
            if (D.same(u, v))
            {
                extraEdge++;
            }
            else
            {
                D.merge(u, v);
            }
        }
        vector<int> cnt(n + 1, 0);
        for (int j = 1; j <= n; j++)
        {
            cnt[D.find(j)]++;
        }
        vector<int> cc;
        for (int j = 1; j <= n; j++)
        {
            if (cnt[j] > 0)
            {
                cc.push_back(cnt[j]);
            }
        }
        sort(cc.rbegin(), cc.rend());
        int ans = cc[0];
        for (int j = 1; j < min((int)cc.size(), extraEdge + 1); j++)
        {
            ans += cc[j];
        }
        cout << ans - 1 << '\n';
    }
    return 0;
}
