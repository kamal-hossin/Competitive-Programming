#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
long long seg[4 * N], lazy[4 * N];
bool hasLazy[4 * N];
int n, m;

void push(int node, int l, int r)
{
    if (hasLazy[node])
    {
        seg[node] = lazy[node] * (r - l + 1);
        if (l != r)
        {
            lazy[node * 2] = lazy[node];
            lazy[node * 2 + 1] = lazy[node];
            hasLazy[node * 2] = true;
            hasLazy[node * 2 + 1] = true;
        }
        hasLazy[node] = false;
    }
}

void update(int node, int l, int r, int ql, int qr, long long v)
{
    push(node, l, r);
    if (qr < l || r < ql)
    {
        return;
    }
    if (ql <= l && r <= qr)
    {
        lazy[node] = v;
        hasLazy[node] = true;
        push(node, l, r);
        return;
    }
    int mid = (l + r) / 2;
    update(node * 2, l, mid, ql, qr, v);
    update(node * 2 + 1, mid + 1, r, ql, qr, v);
    seg[node] = seg[node * 2] + seg[node * 2 + 1];
}

long long query(int node, int l, int r, int ql, int qr)
{
    push(node, l, r);
    if (qr < l || r < ql)
    {
        return 0;
    }
    if (ql <= l && r <= qr)
    {
        return seg[node];
    }
    int mid = (l + r) / 2;
    long long left = query(node * 2, l, mid, ql, qr);
    long long right = query(node * 2 + 1, mid + 1, r, ql, qr);
    return left + right;
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
            int l, r;
            long long v;
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
