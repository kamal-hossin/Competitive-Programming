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
        long long k;
        cin >> n >> k;

        vector<int> a(n), h(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        long long sum = 0;
        int max_len = 0;
        int l = 0;

        for (int r = 0; r < n; r++)
        {
            if (r > 0 && h[r - 1] % h[r] != 0)
            {
                l = r;
                sum = 0;
            }

            sum += a[r];

            while (sum > k)
            {
                sum -= a[l];
                l++;
            }
            max_len = max(max_len, r - l + 1);
        }

        cout << max_len << endl;
    }

    return 0;
}
