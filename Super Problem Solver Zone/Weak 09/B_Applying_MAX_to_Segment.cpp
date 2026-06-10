#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 100000 + 5;
ll lazy[4 * MAXN];

void build(int n, int b, int e)
{
    lazy[n] = 0;
    if (b == e)
    {
        return;
    }
    int mid = (b + e) / 2;
    build(n * 2, b, mid);
    build(n * 2 + 1, mid + 1, e);
}

void update(int n, int b, int e, int l, int r, ll val)
{
    if (r < b || e < l)
    {
        return;
    }
    if (l <= b && e <= r)
    {
        lazy[n] = max(lazy[n], val);
        return;
    }
    int mid = (b + e) / 2;
    update(n * 2, b, mid, l, r, val);
    update(n * 2 + 1, mid + 1, e, l, r, val);
}

ll query(int n, int b, int e, int idx)
{
    if (b == e)
    {
        return lazy[n];
    }
    int mid = (b + e) / 2;
    ll res;
    if (idx <= mid)
    {
        res = query(n * 2, b, mid, idx);
    }
    else
    {
        res = query(n * 2 + 1, mid + 1, e, idx);
    }
    return max(res, lazy[n]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    build(1, 0, n - 1);
    while (m--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int l, r;
            ll v;
            cin >> l >> r >> v;
            update(1, 0, n - 1, l, r - 1, v);
        }
        else
        {
            int i;
            cin >> i;
            cout << query(1, 0, n - 1, i) << '\n';
        }
    }
    return 0;
}
