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
        int total_xor = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total_xor ^= a[i];
        }
        if (total_xor == 0)
        {
            cout << "YES\n";
            continue;
        }
        int curr_xor = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            curr_xor ^= a[i];
            if (curr_xor == total_xor)
            {
                count++;
                curr_xor = 0;
            }
        }
        if (count >= 2)
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
