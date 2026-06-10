#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    for (int k = 1; k < n; k++)
    {
        int x = a / k;
        int y = b / (n - k);
        ans = max(ans, min(x, y));
    }

    cout << ans << endl;

    return 0;
}
