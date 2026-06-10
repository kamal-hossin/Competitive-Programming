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
        vector<int> w(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> w[i];
        }

        int max_teams = 0;

        for (int s = 2; s <= 2 * n; ++s)
        {
            vector<int> freq(n + 1, 0);
            for (int weight : w)
            {
                freq[weight]++;
            }

            int teams = 0;

            for (int i = 1; i <= s / 2; ++i)
            {
                int j = s - i;
                if (j > n)
                    continue;

                if (i == j)
                {
                    teams += freq[i] / 2;
                }
                else
                {
                    teams += min(freq[i], freq[j]);
                }
            }

            max_teams = max(max_teams, teams);
        }

        cout << max_teams << '\n';
    }

    return 0;
}
