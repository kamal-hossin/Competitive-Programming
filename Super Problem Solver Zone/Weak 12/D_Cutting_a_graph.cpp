#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<int> par, rnk, siz;
    int c;

    DSU(int n) : par(n + 1, -1), rnk(n + 1, 0), siz(n + 1, 1), c(n)
    {
        for (int i = 1; i <= n; i++)
            par[i] = i;
    }

    int find(int i)
    {
        return (par[i] == i) ? i : (par[i] = find(par[i]));
    }

    bool same(int u, int v)
    {
        return find(u) == find(v);
    }

    int getSize(int u)
    {
        return siz[find(u)];
    }

    int cnt()
    {
        return c;
    }

    void merge(int u, int v)
    {
        u = find(u);
        v = find(v);
        if (u == v)
            return;
        c--;
        if (rnk[u] < rnk[v])
            swap(u, v);
        else if (rnk[u] == rnk[v])
            rnk[u]++;
        par[v] = u;
        siz[u] += siz[v];
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    DSU D(n);
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
    }
    vector<tuple<string, int, int>> a;
    for (int i = 1; i <= k; i++)
    {
        string query;
        int u, v;
        cin >> query >> u >> v;
        a.push_back({query, u, v});
    }
    reverse(a.begin(), a.end());
    vector<string> res;
    for (auto [query, u, v] : a)
    {
        if (query == "cut")
        {
            D.merge(u, v);
        }
        else
        {
            res.push_back(D.same(u, v) ? "YES" : "NO");
        }
    }
    reverse(res.begin(), res.end());
    for (auto value : res)
    {
        cout << value << endl;
    }

    return 0;
}