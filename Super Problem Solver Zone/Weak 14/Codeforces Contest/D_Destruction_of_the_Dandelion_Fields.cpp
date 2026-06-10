#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    int odd_count = 0;
    long long min_odd = LLONG_MAX;
    long long total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
        if (a[i] % 2 == 1)
        {
            odd_count++;
            if (a[i] < min_odd)
            {
                min_odd = a[i];
            }
        }
    }
    if (odd_count == 0)
    {
        cout << 0 << endl;
    }
    else if (odd_count % 2 == 1)
    {
        cout << total << endl;
    }
    else
    {
        cout << total - min_odd << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
