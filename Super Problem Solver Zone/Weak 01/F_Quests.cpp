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
        int n;
        long long c, d;
        cin >> n >> c >> d;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        long long max_day = min((long long)n, d);
        long long sum = 0;
        for (int i = 0; i < max_day; i++)
        {
            sum += a[i];
        }

        if (sum >= c)
        {
            cout << "Infinity" << endl;
            continue;
        }

        if (a[0] * d < c)
        {
            cout << "Impossible" << endl;
            continue;
        }

        int low = 0, high = d, ans = -1;
        while (low <= high)
        {
            int k = low + (high - low) / 2;
            long long total = 0;
            int limit = min(n, k + 1);
            long long full = d / (k + 1);
            int rem = d % (k + 1);
            for (int i = 0; i < limit; i++)
            {
                total += a[i] * full;
                if (i < rem)
                {
                    total += a[i];
                }
            }

            if (total >= c)
            {
                ans = k;
                low = k + 1;
            }
            else
            {
                high = k - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
