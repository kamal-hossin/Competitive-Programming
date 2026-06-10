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
        int a[n + 3], ans[n + 3];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int l = 0, r;
        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                l++;
            }
        }

        r = l + 1;
        int num = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'L')
            {
                num = num * a[l--] % m;
            }
            else if (s[i] == 'R')
            {
                num = num * a[r++] % m;
            }
            ans[i] = num;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}
