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

    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int n;
        cin >> n;
        DSU D(n);
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
            D.merge(i, p[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            cout << D.getSize(i) << " ";
        }
        cout << endl;
    }
    return 0;
}
