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
        string s;
        cin >> s;
        int n = s.size();
        int min_removal = n - 1;
        double min_cost = INT_MAX;

        for (int mask = 1; mask < (1 << n); ++mask)
        {
            string current;
            int sum = 0;
            for (int i = 0; i < n; ++i)
            {
                if (mask & (1 << i))
                {
                    current += s[i];
                    sum += s[i] - '0';
                }
            }
            if (current.empty())
                continue;
            double num = stod(current);
            double cost = num / sum;
            if (cost < min_cost)
            {
                min_cost = cost;
                min_removal = n - __builtin_popcount(mask);
            }
            else if (cost == min_cost)
            {
                min_removal = min(min_removal, n - __builtin_popcount(mask));
            }
        }
        cout << min_removal << endl;
    }

    return 0;
}
