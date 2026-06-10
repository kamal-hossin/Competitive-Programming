#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 9;
int t[maxN * 4];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = 0;
        return;
    }
    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}

void update(int n, int b, int e, int i, int v)
{
    if (i < b || i > e)
    {
        return;
    }
    if (b == e)
    {
        t[n] = v;
        return;
    }
    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = t[l] + t[r];
}

long long query(int n, int b, int e, int i, int j)
{
    if (e < i || j < b)
    {
        return 0;
    }
    if (b >= i && e <= j)
    {
        return t[n];
    }
    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m;
        vector<pair<int, int>> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i].first >> a[i].second;
        }

        cin >> q;
        vector<int> queries(q);
        for (int i = 0; i < q; i++)
        {
            cin >> queries[i];
        }

        int l = 0;
        int r = q - 1;
        int ans = -1;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            build(1, 1, n);
            for (int i = 0; i <= mid; i++)
            {
                update(1, 1, n, queries[i], 1);
            }

            bool found = false;
            for (auto [L, R] : a)
            {
                int ones = query(1, 1, n, L, R);
                int len = R - L + 1;
                if (ones > len / 2)
                {
                    found = true;
                    break;
                }
            }

            if (found)
            {
                ans = mid + 1;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
