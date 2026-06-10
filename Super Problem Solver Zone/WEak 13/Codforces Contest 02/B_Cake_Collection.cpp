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
        long long m;
        cin >> n >> m;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<long long>());

        long long total_cakes = 0;
        long long k = min((long long)n, m);

        for (int i = 0; i < k; ++i)
        {
            total_cakes += (m - i) * a[i];
        }

        cout << total_cakes << endl;
    }
    return 0;
}
