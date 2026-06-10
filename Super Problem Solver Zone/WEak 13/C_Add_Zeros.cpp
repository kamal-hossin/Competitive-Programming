#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
            cin >> a[i];

        vector<pair<long long, long long>> v;
        for (long long i = 0; i < n; i++)
        {
            long long x = i + 1 + a[i];
            v.push_back({x, i});
        }
        sort(v.rbegin(), v.rend());

        map<long long, long long> mp;
        for (auto [x, y] : v)
        {
            long long z = x + y;
            if (mp.find(z) != mp.end())
                mp[x] = max(mp[x], mp[z]);
            else
                mp[x] = max(mp[x], z);
        }
        cout << max(n, mp[n + 1] - 1) << endl;
    }

    return 0;
}
