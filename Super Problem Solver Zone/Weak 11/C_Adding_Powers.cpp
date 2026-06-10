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
        long long int n, k, b[200] = {0}, y = 0, x;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            long long int a = 0;
            while (x > 0)
            {
                b[a] += x % k;
                if (b[a] > 1)
                {
                    y++;
                    break;
                }
                x /= k;
                a++;
            }
        }
        if (y > 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
