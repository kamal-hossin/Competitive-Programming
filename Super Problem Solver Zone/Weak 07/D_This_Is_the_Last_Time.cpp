#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<tuple<int, int, int>> tp(n);
        for (int i = 0; i < n; ++i)
        {
            int l, r, x;
            cin >> l >> r >> x;
            tp[i] = {l, r, x};
        }
        sort(tp.begin(), tp.end());
        for (int i = 0; i < n; ++i)
        {
            int l = get<0>(tp[i]);
            int r = get<1>(tp[i]);
            int x = get<2>(tp[i]);
            if (l <= k && k <= r)
            {
                k = max(k, x);
            }
        }
        cout << k << '\n';
    }
    return 0;
}
