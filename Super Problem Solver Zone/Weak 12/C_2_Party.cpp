#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<int> par, rnk, siz;
    int c;
    DSU(int n) : par(n + 1), rnk(n + 1, 0), siz(n + 1, 1), c(n)
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
    void merge(int u, int v)
    {
        u = find(u);
        v = find(v);
        if (u == v)
        {
            return;
        }
        c--;
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
    int getSize(int u)
    {
        return siz[find(u)];
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int k;
    cin >> k;
    DSU D(n);
    for (int i = 0; i < k; i++)
    {
        int u, v;
        cin >> u >> v;
        D.merge(u, v);
    }
    int m;
    cin >> m;
    vector<pair<int, int>> dislikes(m);
    for (int i = 0; i < m; i++)
    {
        cin >> dislikes[i].first >> dislikes[i].second;
    }
    vector<bool> invalid(n + 1, false);
    for (auto [u, v] : dislikes)
    {
        if (D.find(u) == D.find(v))
        {
            invalid[D.find(u)] = true;
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (D.find(i) == i && !invalid[i])
        {
            ans = max(ans, D.siz[i]);
        }
    }
    cout << ans << endl;
    return 0;
}
