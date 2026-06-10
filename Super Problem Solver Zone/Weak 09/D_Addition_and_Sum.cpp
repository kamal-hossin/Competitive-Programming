#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 9;
long long t[maxN * 4], lazy[maxN * 4];

void push(int n, int b, int e)
{
    if (lazy[n] != 0)
    {
        t[n] += (e - b + 1) * lazy[n];
        if (b != e)
        {
            int l = 2 * n, r = 2 * n + 1;
            lazy[l] += lazy[n];
            lazy[r] += lazy[n];
        }
        lazy[n] = 0;
    }
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = 0;
        return;
    }
    int mid = (b + e) / 2;
    build(n * 2, b, mid);
    build(n * 2 + 1, mid + 1, e);
    t[n] = t[n * 2] + t[n * 2 + 1];
}

void update(int n, int b, int e, int i, int j, long long val)
{
    push(n, b, e);
    if (e < i || j < b)
        return;
    if (i <= b && e <= j)
    {
        lazy[n] += val;
        push(n, b, e);
        return;
    }
    int mid = (b + e) / 2;
    update(n * 2, b, mid, i, j, val);
    update(n * 2 + 1, mid + 1, e, i, j, val);
    t[n] = t[n * 2] + t[n * 2 + 1];
}

long long query(int n, int b, int e, int i, int j)
{
    push(n, b, e);
    if (e < i || j < b)
        return 0;
    if (i <= b && e <= j)
        return t[n];
    int mid = (b + e) / 2;
    return query(n * 2, b, mid, i, j) + query(n * 2 + 1, mid + 1, e, i, j);
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
