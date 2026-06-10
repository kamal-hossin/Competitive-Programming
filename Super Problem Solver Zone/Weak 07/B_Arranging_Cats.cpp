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
        string s, f;
        cin >> s >> f;

        int inc = 0, dec = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && f[i] == '1')
            {
                inc++;
            }
            else if (s[i] == '1' && f[i] == '0')
            {
                dec++;
            }
        }

        cout << max(inc, dec) << endl;
    }

    return 0;
}
