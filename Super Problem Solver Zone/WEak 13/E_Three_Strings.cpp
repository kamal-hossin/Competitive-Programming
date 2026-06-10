#include <bits/stdc++.h>
using namespace std;
int dp[1100][1100];
void solve()
{
    string a, b, c;
    cin >> a >> b >> c;
    int n = a.size(), m = b.size();
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 && j == 0)
                continue;
            dp[i][j] = 1e9;
            if (i != 0)
            {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + (a[i - 1] != c[i + j - 1]));
            }
            if (j != 0)
            {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + (b[j - 1] != c[i + j - 1]));
            }
        }
    }
    cout << dp[n][m] << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}