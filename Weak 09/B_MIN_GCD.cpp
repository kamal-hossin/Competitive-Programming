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

        vector<long long> a(n);
        long long mn = LLONG_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn, a[i]);
        }

        vector<long long> rest;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % mn != 0)
            {
                rest.push_back(a[i]);
            }
        }

        if (rest.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            long long g = rest[0];
            for (int i = 1; i < rest.size(); i++)
            {
                g = __gcd(g, rest[i]);
            }

            if (g == mn)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
