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

        vector<int> counts(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a <= n)
            {
                counts[a]++;
            }
        }

        vector<int> caught_next(n + 1, 0);

        for (int j = 1; j <= n; j++)
        {
            if (counts[j] > 0)
            {
                for (int M = j; M <= n; M += j)
                {
                    caught_next[M] += counts[j];
                }
            }
        }

        int max_caught_frogs = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (caught_next[i] > max_caught_frogs)
            {
                max_caught_frogs = caught_next[i];
            }
        }

        cout << max_caught_frogs << endl;
    }

    return 0;
}
