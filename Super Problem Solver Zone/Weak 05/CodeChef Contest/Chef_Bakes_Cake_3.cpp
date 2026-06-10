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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int result = 0;

        for (int x = 0; x <= 100; x++)
        {
            int profit = 0;

            for (int i = 0; i < n; i++)
            {
                int sold;
                if (a[i] < x)
                {
                    sold = a[i];
                }
                else
                {
                    sold = x;
                }
                profit += (sold * 50) - (x * 30);
            }

            if (profit > result)
            {
                result = profit;
            }
        }

        cout << result << endl;
    }

    return 0;
}
