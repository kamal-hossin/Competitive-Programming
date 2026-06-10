#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<long long> a(n);
    long long total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }

    long long min_diff = LLONG_MAX;

    for (int mask = 0; mask < (1 << n); mask++)
    {
        long long group1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                group1 += a[i];
            }
        }
        long long group2 = total - group1;
        min_diff = min(min_diff, abs(group1 - group2));
    }

    cout << min_diff << endl;

    return 0;
}
