#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int total_or_b = 0;
        for (int i = 0; i < m; i++)
        {
            total_or_b |= b[i];
        }

        int original_xor = 0;
        for (int i = 0; i < n; i++)
        {
            original_xor ^= a[i];
        }

        int xor_with_or = 0;
        for (int i = 0; i < n; i++)
        {
            xor_with_or ^= (a[i] | total_or_b);
        }

        int min_xor = min(original_xor, xor_with_or);
        int max_xor = max(original_xor, xor_with_or);

        cout << min_xor << " " << max_xor << endl;
    }

    return 0;
}
