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
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<bool> dp(3, false);

        for (int i = 0; i < n; i++)
        {
            vector<bool> next_dp = dp;
            int mod = a[i] % 3;

            next_dp[mod] = true;
            for (int j = 0; j < 3; ++j)
            {
                if (dp[j])
                {
                    next_dp[(j + mod) % 3] = true;
                }
            }

            dp = next_dp;
        }

        if (dp[0])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
