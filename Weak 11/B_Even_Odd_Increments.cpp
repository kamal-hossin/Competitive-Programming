#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i, j, k, n, m, t, res, f[2];
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        res = 0;
        f[0] = f[1] = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> k;
            res += k;
            f[k & 1]++;
        }
        while (m--)
        {
            cin >> i >> j;
            res += j * f[i];
            if (j & 1)
            {
                f[i ^ 1] += f[i];
                f[i] = 0;
            }
            cout << res << '\n';
        }
    }
    return 0;
}