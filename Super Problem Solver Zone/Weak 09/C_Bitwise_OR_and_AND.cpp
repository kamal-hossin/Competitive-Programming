#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int n, m;
int seg[4 * N], lazy[4 * N];

void push(int node, int l, int r)
{
    if (lazy[node] == 0)
    {
        return;
    }
    seg[node] |= lazy[node];
    if (l != r)
    {
        lazy[node * 2] |= lazy[node];
        lazy[node * 2 + 1] |= lazy[node];
    }
    lazy[node] = 0;
}

void update(int node, int l, int r, int ql, int qr, int v)
{
    push(node, l, r);
    if (qr < l || r < ql)
    {
        return;
    }
    if (ql <= l && r <= qr)
    {
        lazy[node] |= v;
        push(node, l, r);
        return;
    }
    int mid = (l + r) / 2;
    update(node * 2, l, mid, ql, qr, v);
    update(node * 2 + 1, mid + 1, r, ql, qr, v);
    seg[node] = seg[node * 2] & seg[node * 2 + 1];
}

int query(int node, int l, int r, int ql, int qr)
{
    push(node, l, r);
    if (qr < l || r < ql)
    {
        return (1 << 30) - 1;
    }
    if (ql <= l && r <= qr)
    {
        return seg[node];
    }
    int mid = (l + r) / 2;
    int left = query(node * 2, l, mid, ql, qr);
    int right = query(node * 2 + 1, mid + 1, r, ql, qr);
    return left & right;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    while (m--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int l, r, v;
            cin >> l >> r >> v;
            update(1, 0, n - 1, l, r - 1, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            cout << query(1, 0, n - 1, l, r - 1) << "\n";
        }
    }
}
