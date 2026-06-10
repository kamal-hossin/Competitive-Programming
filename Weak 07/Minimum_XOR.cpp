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
            cout << 0 << endl;
        }
        else
        {

            int min_xor = total_xor;
            for (int i = 0; i < n; i++)
            {
                int new_xor = total_xor ^ a[i];
                min_xor = min(min_xor, new_xor);
            }
            cout << min_xor << endl;
        }
    }

    return 0;
}
