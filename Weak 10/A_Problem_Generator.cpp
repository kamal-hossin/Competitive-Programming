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
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;

        int freq[7] = {0};

        for (int i = 0; i < n; i++)
        {
            freq[a[i] - 'A']++;
        }

        int ans = 0;
        for (int i = 0; i < 7; i++)
        {
            if (freq[i] < m)
            {
                ans += (m - freq[i]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
