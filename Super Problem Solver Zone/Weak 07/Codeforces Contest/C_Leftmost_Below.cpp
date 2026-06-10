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
        vector<long long> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool ok = true;
        for (int i = 1; i < n; i++)
        {
            if (b[i] > b[i - 1])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
