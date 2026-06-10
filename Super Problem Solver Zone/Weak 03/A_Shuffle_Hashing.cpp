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
        string p, h;
        cin >> p >> h;

        int m = p.length(), n = h.length();
        if (m > n)
        {
            cout << "NO\n";
            continue;
        }

        vector<int> a(26, 0), b(26, 0);

        for (int i = 0; i < m; i++)
        {
            a[p[i] - 'a']++;
        }

        for (int i = 0; i < m; i++)
        {
            b[h[i] - 'a']++;
        }

        bool found = false;
        if (a == b)
        {
            found = true;
        }

        for (int i = m; i < n; i++)
        {
            if (found)
                break;

            b[h[i - m] - 'a']--;
            b[h[i] - 'a']++;

            if (a == b)
            {
                found = true;
            }
        }

        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
