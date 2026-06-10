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
        vector<int> p(n);

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        vector<int> q(n);
        vector<int> needed(n);
        for (int i = 0; i < n; i++)
        {
            needed[i] = (3 - p[i] % 3) % 3;
        }

        vector<vector<int>> available(3);
        for (int i = 1; i <= n; i++)
        {
            available[i % 3].push_back(i);
        }

        for (int i = 0; i < n; i++)
        {
            int rem = needed[i];
            q[i] = available[rem].back();
            available[rem].pop_back();
        }

        for (int i = 0; i < n; i++)
        {
            cout << q[i];
            if (i < n - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "\n";
            }
        }
    }

    return 0;
}
