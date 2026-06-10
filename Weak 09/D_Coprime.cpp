#include<bits/stdc++.h>
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

        vector<int> a(n + 1);
        vector<int> b(1001, -1);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[a[i]] = i;
        }

        int maxSum = -1;

        for (int i = 1; i <= 1000; i++)
        {
            if (b[i] == -1)
            {
                continue;
            }
            for (int j = 1; j <= 1000; j++)
            {
                if (b[j] == -1)
                {
                    continue;
                }
                if (__gcd(i, j) == 1)
                {
                    maxSum = max(maxSum, b[i] + b[j]);
                }
            }
        }

        cout << maxSum << endl;
    }

    return 0;
}

