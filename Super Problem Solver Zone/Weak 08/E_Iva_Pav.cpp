#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
int t[4 * MAXN];
int a[MAXN];

void build(int node, int b, int e)
{
    if (b == e)
    {
        t[node] = a[b];
        return;
    }
    int mid = (b + e) / 2;
    build(2 * node, b, mid);
    build(2 * node + 1, mid + 1, e);
    t[node] = t[2 * node] & t[2 * node + 1];
}

int query(int node, int b, int e, int l, int r)
{
    if (r < b || e < l)
    {
        return (1 << 30) - 1;
    }
    if (l <= b && e <= r)
    {
        return t[node];
    }
    int mid = (b + e) / 2;
    int left = query(2 * node, b, mid, l, r);
    int right = query(2 * node + 1, mid + 1, e, l, r);
    return left & right;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        build(1, 1, n);

        int q;
        cin >> q;
        while (q--)
        {
            int l, k;
            cin >> l >> k;

            int low = l;
            int high = n;
            int ans = -1;
            while (low <= high)
            {
                int mid = (low + high) / 2;
                int val = query(1, 1, n, l, mid);
                if (val >= k)
                {
                    ans = mid;
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            cout << ans << ' ';
        }
        cout << '\n';
    }

    return 0;
}
