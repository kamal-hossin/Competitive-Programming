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
        long long n, x, y;
        cin >> n >> x >> y;

        long long low = 0, high = n, ans = n;
        while (low <= high)
        {
            long long mid = (low + high) / 2;
            long long blended = min(mid * x, mid * y);

            if (blended >= n)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
