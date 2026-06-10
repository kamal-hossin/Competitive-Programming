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
        long long x, y, k;
        cin >> x >> y >> k;

        while (k > 0)
        {
            if (x == 1)
            {
                k %= (y - 1);
                if (k == 0)
                {
                    break;
                }
            }

            long long jump = y - (x % y);

            if (k < jump)
            {
                x += k;
                k = 0;
            }
            else
            {
                k -= jump;
                x += jump;

                while (x % y == 0)
                {
                    x /= y;
                }
            }
        }

        cout << x << endl;
    }

    return 0;
}
