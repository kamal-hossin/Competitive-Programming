#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 5;
const int INF = 1e9 + 9;

struct node
{
    int mn, count;
};

int a[maxN];
node t[4 * maxN];

node merge(node l, node r)
{
    node res;
    res.mn = min(l.mn, r.mn);
    res.count = 0;

    if (l.mn == res.mn)
    {
        res.count += l.count;
    }
    if (r.mn == res.mn)
    {
        res.count += r.count;
    }

    return res;
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = {a[b], 1};
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}

void update(int n, int b, int e, int i, int x)
{
    if (b == e)
    {
        t[n] = {x, 1};
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    if (i <= mid)
    {
        update(l, b, mid, i, x);
    }
    else
    {
        update(r, mid + 1, e, i, x);
    }

    t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j)
{
    if (e < i || j < b)
    {
        return {INF, 0};
    }

    if (i <= b && e <= j)
    {
        return t[n];
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    build(1, 0, n - 1);

    while (m--)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            int i, v;
            cin >> i >> v;
            update(1, 0, n - 1, i, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            node res = query(1, 0, n - 1, l, r - 1);
            cout << res.mn << " " << res.count << '\n';
        }
    }

    return 0;
}
