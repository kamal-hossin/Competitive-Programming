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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int minwaste = INT_MAX;
        bool possible = false;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                minwaste = min(minwaste, a[i] % k);
                possible = true;
            }
        }

        if (possible)
        {
            cout << minwaste << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
