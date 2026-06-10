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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        bool found = false;
        for (int x = 0; x < 256; x++)
        {
            int total_xor = 0;
            for (int i = 0; i < n; i++)
            {
                total_xor ^= (a[i] ^ x);
            }

            if (total_xor == 0)
            {
                cout << x << endl;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
