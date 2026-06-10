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
        long long A, B;
        cin >> A >> B;

        if (B == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            long long x = A * (B - 1);
            long long y = A * (B + 1);
            long long z = x + y;
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
        }
    }

    return 0;
}
