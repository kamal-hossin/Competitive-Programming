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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int robin_gold = 0;
        int given = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] >= k)
            {
                robin_gold += a[i];
            }
            else if (a[i] == 0)
            {
                if (robin_gold > 0)
                {
                    robin_gold -= 1;
                    given += 1;
                }
            }
        }
        cout << given << endl;
    }

    return 0;
}
