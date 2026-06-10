#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int t, n, m, k, fa[N][2], a[N], b[N], c[N], d[N], x, y, ans;

int find(int x, int id)
{
    if (fa[x][id] == x)
    {
        return x;
    }
    return fa[x][id] = find(fa[x][id], id);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;

        for (int i = 1; i <= n; ++i)
        {
            fa[i][0] = fa[i][1] = i;
        }

        for (int i = 1; i <= m; ++i)
        {
            cin >> a[i] >> b[i];
        }

        ans = 0;

        for (int i = 1; i <= k; ++i)
        {
            cin >> c[i] >> d[i];
            fa[find(c[i], 1)][1] = find(d[i], 1);
        }

        for (int i = 1; i <= m; ++i)
        {
            if (find(a[i], 1) != find(b[i], 1))
            {
                ans++;
            }
            else
            {
                fa[find(a[i], 0)][0] = find(b[i], 0);
            }
        }

        for (int i = 1; i <= k; ++i)
        {
            if (find(c[i], 0) != find(d[i], 0))
            {
                ans++;
                fa[find(c[i], 0)][0] = find(d[i], 0);
            }
        }

        cout << ans << endl;
    }
    return 0;
}
