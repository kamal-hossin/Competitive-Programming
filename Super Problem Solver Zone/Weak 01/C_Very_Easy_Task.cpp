#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, x, y;
    cin >> n >> x >> y;

    if (x > y)
    {
        swap(x, y);
    }

    long long l = 0, r = 1LL * n * x, ans = 0;
    while (l <= r)
    {
        long long mid = l + (r -l) / 2;
        long long copies = (mid - x) / x + (mid - x) / y + 1;
        if (mid < x)
        {
            copies = 0;
        }
        if (copies >= n)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
