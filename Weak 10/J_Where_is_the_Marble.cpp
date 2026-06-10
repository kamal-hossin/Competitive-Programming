#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, caseNum = 1;

    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
            break;

        vector<int> marbles(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> marbles[i];
        }

        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << caseNum++ << ":\n";

        while (q--)
        {
            int query;
            cin >> query;

            auto it = lower_bound(marbles.begin(), marbles.end(), query);

            if (it == marbles.end() || *it != query)
            {
                cout << query << " not found\n";
            }
            else
            {
                cout << query << " found at " << (it - marbles.begin() + 1) << "\n";
            }
        }
    }

    return 0;
}
