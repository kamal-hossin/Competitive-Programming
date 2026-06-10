#include <bits/stdc++.h>
using namespace std;
int t, n, x, a[1010];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while (t--)
    {
        int mx = 0;
        cin >> n >> x;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i] - a[i - 1]);
        }
        cout << max(mx, x - a[n] << 1) << endl;
    }

    return 0;
}
