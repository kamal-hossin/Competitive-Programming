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
        long long a, b;
        cin >> a >> b;

        if ((a + b) % 2 == 0)
        {
            cout << a + b << "\n";
            continue;
        }

        if (b % 2 != 0)
        {
            cout << -1 << "\n";
            continue;
        }

        long long x = b;
        while (x % 2 == 0)
            x /= 2;
        cout << a * x + b / x << "\n";
    }

    return 0;
}
