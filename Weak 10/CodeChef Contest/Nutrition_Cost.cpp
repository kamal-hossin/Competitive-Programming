#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int max_value = 0;

        if (n > 20)
        {
            cout << 0 << endl;
            continue;
        }

        for (int mask = 0; mask < (1 << n); mask++)
        {
            set<int> vitamins;
            int cost_sum = 0;
            for (int i = 0; i < n; ++i)
            {
                if (mask & (1 << i))
                {
                    vitamins.insert(a[i]);
                    cost_sum += b[i];
                }
            }
            int distinct_count = (int)vitamins.size();
            int value = c * distinct_count - cost_sum;
            if (value > max_value)
                max_value = value;
        }

        cout << max_value << endl;
    }

    return 0;
}
