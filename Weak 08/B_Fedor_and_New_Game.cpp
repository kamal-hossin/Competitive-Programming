#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;

    int x[m + 1];
    for (int i = 0; i <= m; i++)
    {
        cin >> x[i];
    }

    int fedorsArmy = x[m];
    int friends = 0;

    for (int i = 0; i < m; i++)
    {
        int diff = x[i] ^ fedorsArmy;
        int cnt = 0;

        while (diff > 0)
        {
            if (diff & 1)
                cnt++;
            diff >>= 1;
        }

        if (cnt <= k)
            friends++;
    }

    cout << friends << endl;

    return 0;
}
