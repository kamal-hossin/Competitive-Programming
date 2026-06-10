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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            auto lower = lower_bound(a.begin() + i + 1, a.end(), l - a[i]);
            auto upper = upper_bound(a.begin() + i + 1, a.end(), r - a[i]);
            ans += upper - lower;
        }
        cout << ans << endl;
    }

    return 0;
}
