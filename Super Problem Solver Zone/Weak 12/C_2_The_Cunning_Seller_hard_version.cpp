#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (n <= k)
        {
            cout << 3 * n << endl;
            continue;
        }
        long long m = (n - k + 1) / 2, ex = 0, cur = n, p = 1;
        for (int i = 0; i < 60 && m; i++)
        {
            if (cur < 3)
            {
                cur = 0;
                p *= 3;
                continue;
            }
            long long d = min(cur / 3, m);
            ex += d * p;
            m -= d;
            cur = d;
            p *= 3;
        }
        cout << (m ? -1 : 3 * n + ex) << endl;
    }

    return 0;
}
