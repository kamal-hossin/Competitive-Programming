#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000 + 5;
string s;
int lazy[4 * MAXN];

void update(int node, int b, int e, int l, int r)
{
    if (b > r || e < l)
    {
        return;
    }
    if (b >= l && e <= r)
    {
        lazy[node] ^= 1;
        return;
    }
    int mid = (b + e) / 2;
    update(node * 2, b, mid, l, r);
    update(node * 2 + 1, mid + 1, e, l, r);
}

int query(int node, int b, int e, int idx, int carry)
{
    if (b == e)
    {
        int bit = s[b - 1] - '0';
        int flips = carry ^ lazy[node];
        if (flips % 2 == 1)
        {
            bit ^= 1;
        }
        return bit;
    }
    int mid = (b + e) / 2;
    if (idx <= mid)
    {
        return query(node * 2, b, mid, idx, carry ^ lazy[node]);
    }
    else
    {
        return query(node * 2 + 1, mid + 1, e, idx, carry ^ lazy[node]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int cs = 1; cs <= T; cs++)
    {
        cin >> s;
        int n = s.size();
        memset(lazy, 0, sizeof(lazy));
        int q;
        cin >> q;
        cout << "Case " << cs << ":\n";
        while (q--)
        {
            char type;
            cin >> type;
            if (type == 'I')
            {
                int i, j;
                cin >> i >> j;
                update(1, 1, n, i, j);
            }
            else
            {
                int i;
                cin >> i;
                cout << query(1, 1, n, i, 0) << "\n";
            }
        }
    }
    return 0;
}
