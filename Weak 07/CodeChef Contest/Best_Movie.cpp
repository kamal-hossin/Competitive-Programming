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

        int min_cost = INT_MAX;

        for (int i = 0; i < n; ++i)
        {
            int A, B;
            cin >> A >> B;

            if (A >= 7)
            {
                min_cost = min(min_cost, B);
            }
        }

        if (min_cost == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << min_cost << endl;
        }
    }

    return 0;
}
