#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
int t, n, q;
int a[MAXN], tree[MAXN * 4];

int digit_sum(int x)
{
    int res = 0;
    while (x > 0)
    {
        res += x % 10;
        x /= 10;
    }
    return res;
}

void build(int node, int l, int r)
{
    if (l == r)
    {
        tree[node] = (a[l] > 9);
        return;
    }
    int mid = (l + r) / 2;
    build(node * 2, l, mid);
    build(node * 2 + 1, mid + 1, r);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

void update(int node, int l, int r, int ql, int qr)
{
    if (tree[node] == 0 || r < ql || l > qr)
    {
        return;
    }
    if (l == r)
    {
        a[l] = digit_sum(a[l]);
        tree[node] = (a[l] > 9);
        return;
    }
    int mid = (l + r) / 2;
    update(node * 2, l, mid, ql, qr);
    update(node * 2 + 1, mid + 1, r, ql, qr);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        build(1, 1, n);
        while (q--)
        {
            int type;
            cin >> type;
            if (type == 1)
            {
                int l, r;
                cin >> l >> r;
                update(1, 1, n, l, r);
            }
            else
            {
                int x;
                cin >> x;
                cout << a[x] << '\n';
            }
        }
    }

    return 0;
}
