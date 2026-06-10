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
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<long long> prefix(n);
        prefix[0] = a[0];
        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + a[i];

        vector<int> max_a(n);
        max_a[0] = a[0];
        for (int i = 1; i < n; i++)
            max_a[i] = max(max_a[i - 1], a[i]);

        while (q--)
        {
            int k;
            cin >> k;

            int l = 0, r = n - 1, ans = -1;
            while (l <= r)
            {
                int mid =l+ (r - l) / 2;
                if (max_a[mid] <= k)
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }

            if (ans == -1)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << prefix[ans] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
