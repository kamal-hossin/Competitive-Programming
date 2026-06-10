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
        vector<int> val(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            val[x]++;
        }
        for (int i = 2; i <= n; i++)
        {
            val[i] += val[i - 1];
        }
        int b = 1, k = (n - 1) / 2 + 1;
        for (int i = 1; i <= k; i++)
        {
            k = min(k, val[i] - i + 1);
        }
        cout << k << endl;
    }

    return 0;
}
