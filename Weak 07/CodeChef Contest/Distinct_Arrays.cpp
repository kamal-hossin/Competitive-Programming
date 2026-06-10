#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long result = 1;

        for (int i = 0; i < n; i++)
        {
            result = result * (a[i] - i) % MOD;

            if (result == 0)
            {
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}
