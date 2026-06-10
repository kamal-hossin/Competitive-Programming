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
        int count_one = 0;
        int count_large = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 1)
            {
                count_one++;
            }
            else if (a >= 2)
            {
                count_large++;
            }
        }
        if (count_large > 0)
        {
            long long res = 1;
            long long base = 2;
            long long exp = 998244353 - 2;
            while (exp > 0)
            {
                if (exp % 2 == 1)
                {
                    res = (res * base) % 998244353;
                }
                base = (base * base) % 998244353;
                exp /= 2;
            }
            cout << res << endl;
        }
        else
        {
            if (count_one % 2 == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
