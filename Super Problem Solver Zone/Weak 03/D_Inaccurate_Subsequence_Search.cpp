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
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        unordered_map<int, int> b_freq;
        for (int i = 0; i < m; i++)
        {
            b_freq[b[i]]++;
        }

        unordered_map<int, int> window;
        int match = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int x = a[i];
            window[x]++;
            if (window[x] <= b_freq[x])
            {
                match++;
            }

            if (i >= m)
            {
                int y = a[i - m];
                if (window[y] <= b_freq[y])
                {
                    match--;
                }
                window[y]--;
                if (window[y] == 0)
                {
                    window.erase(y);
                }
            }

            if (i >= m - 1)
            {
                if (match >= k)
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
