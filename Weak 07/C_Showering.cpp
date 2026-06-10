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
        long long s, m;
        cin >> n >> s >> m;

        vector<pair<long long, long long>> tasks(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> tasks[i].first >> tasks[i].second;
        }

        bool canShower = false;
        long long prev = 0;

        for (int i = 0; i < n; ++i)
        {
            long long li = tasks[i].first;
            long long ri = tasks[i].second;

            if (li - prev >= s)
            {
                canShower = true;
                break;
            }

            prev = ri;
        }

        if (!canShower && m - prev >= s)
        {
            canShower = true;
        }

        if (canShower)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
