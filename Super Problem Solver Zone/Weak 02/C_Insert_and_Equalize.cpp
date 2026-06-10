#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

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

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        sort(a.begin(), a.end());

        long long common_divisor = 0;
        for (int i = 0; i < n - 1; i++)
        {
            long long diff = a[i + 1] - a[i];
            if (common_divisor == 0)
            {
                common_divisor = diff;
            }
            else
            {
                common_divisor = gcd(common_divisor, diff);
            }
        }

        long long base_operations = 0;
        for (int i = 0; i < n; i++)
        {
            base_operations += (a[n - 1] - a[i]) / common_divisor;
        }

        long long hole_cost = n;
        bool found_hole = false;
        for (int i = 1; i < n; i++)
        {
            long long expected_val = a[n - 1] - i * common_divisor;
            if (a[n - 1 - i] != expected_val)
            {
                hole_cost = i;
                found_hole = true;
                break;
            }
        }

        long long cost1 = base_operations + hole_cost;
        long long cost2 = base_operations + n;

        if (cost1 < cost2)
        {
            cout << cost1 << endl;
        }
        else
        {
            cout << cost2 << endl;
        }
    }

    return 0;
}
