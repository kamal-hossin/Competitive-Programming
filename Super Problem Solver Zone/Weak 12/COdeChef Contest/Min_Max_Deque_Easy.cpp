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
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int s = a[0];
        for (int i = 3; i <= n - 1; i++)
        {
            if (i % 2 != 0)
            {
                s = max(a[i - 2], s);
            }
            else
            {
                s = min(a[i - 2], s);
            }
        }
        int result = min(a[n - 1], max(a[n - 2], s));
        cout << result << endl;
        for (int k = 0; k < q; k++)
        {
            int p, x;
            cin >> p >> x;
        }
    }
    return 0;
}
