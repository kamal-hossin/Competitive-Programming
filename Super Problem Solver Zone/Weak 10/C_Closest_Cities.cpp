#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
int T, n, m, a[N], b[N], ans[N], bns[N], x, y;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        b[1] = 2;
        b[n] = n - 1;
        for (int i = 2; i < n; i++)
        {
            if (a[i] - a[i - 1] < a[i + 1] - a[i])
            {
                b[i] = i - 1;
            }
            else
            {
                b[i] = i + 1;
            }
        }

        ans[1] = 0;
        bns[n] = 0;

        for (int i = 2; i <= n; i++)
        {
            if (b[i - 1] == i)
            {
                ans[i] = ans[i - 1] + 1;
            }
            else
            {
                ans[i] = ans[i - 1] + (a[i] - a[i - 1]);
            }
        }

        for (int i = n - 1; i >= 1; i--)
        {
            if (b[i + 1] == i)
            {
                bns[i] = bns[i + 1] + 1;
            }
            else
            {
                bns[i] = bns[i + 1] + (a[i + 1] - a[i]);
            }
        }

        cin >> m;
        while (m--)
        {
            cin >> x >> y;
            if (x < y)
            {
                cout << ans[y] - ans[x] << endl;
            }
            else
            {
                cout << bns[y] - bns[x] << endl;
            }
        }
    }

    return 0;
}
