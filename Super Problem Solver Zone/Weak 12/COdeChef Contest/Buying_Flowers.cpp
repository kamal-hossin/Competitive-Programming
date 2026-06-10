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
        int ans = INT_MAX;
        for (int i = 0; i * 3 <= n; i++)
        {
            int rem = n - i * 3;
            if (rem % 2 == 0)
            {
                int two = rem / 2;
                int cost = i * 5 + two * 4;
                ans = min(ans, cost);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
