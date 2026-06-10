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
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        vector<long long> prefix(n);
        prefix[0] = a[0];
        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + a[i];

        while (q--)
        {
            long long x;
            cin >> x;
            int l = 0, r = n - 1, ans = -1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (prefix[mid] >= x)
                {
                    ans = mid + 1;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
