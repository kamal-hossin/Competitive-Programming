#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<vector<int>> dp(n + 3, vector<int>(2, INF));
        dp[n + 1][0] = dp[n + 1][1] = 0;
        dp[n + 2][0] = dp[n + 2][1] = 0;

        for (int i = n; i >= 1; i--)
        {
            int skip1 = a[i];
            dp[i][0] = skip1 + dp[i + 1][1];
            if (i + 1 <= n)
            {
                int skip2 = a[i] + a[i + 1];
                dp[i][0] = min(dp[i][0], skip2 + dp[i + 2][1]);
            }
            dp[i][1] = dp[i + 1][0];
            if (i + 1 <= n)
            {
                dp[i][1] = min(dp[i][1], dp[i + 2][0]);
            }
        }

        cout << dp[1][0] << "\n";
    }

    return 0;
}
