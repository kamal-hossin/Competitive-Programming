#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n), prefix_min(n), suffex_max(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        prefix_min[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix_min[i] = min(prefix_min[i - 1], a[i]);
        }

       suffex_max[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
           suffex_max[i] = max(suffex_max[i + 1], a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == prefix_min[i] || a[i] == suffex_max[i])
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }

        cout << endl;
    }

    return 0;
}
