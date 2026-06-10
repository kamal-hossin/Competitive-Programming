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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> prefix(n);
        prefix[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = min(prefix[i - 1], a[i]);
        }

        vector<int> suffix(n);
        suffix[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            suffix[i] = max(suffix[i + 1], a[i]);
        }

        string ans(n, '0');
        for (int i = 0; i < n; i++)
        {
            if (a[i] == prefix[i] || a[i] == suffix[i])
            {
                ans[i] = '1';
            }
        }
        cout << ans << endl;
    }

    return 0;
}
