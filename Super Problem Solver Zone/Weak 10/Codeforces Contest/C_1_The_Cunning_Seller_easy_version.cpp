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

        long long total_cost = 0;
        int x = 0;
        long long p3_prev = 0;
        long long p3_curr = 1;

        while (n > 0)
        {
            int digit = n % 3;
            if (digit != 0)
            {
                long long deal_cost;
                if (x == 0)
                {
                    deal_cost = 3;
                }
                else
                {
                    deal_cost = p3_curr * 3 + x * p3_prev;
                }
                total_cost += digit * deal_cost;
            }
            n /= 3;
            x++;
            long long temp = p3_curr;
            p3_curr *= 3;
            p3_prev = temp;
        }

        cout << total_cost << endl;
    }

    return 0;
}
