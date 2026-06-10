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
        int n, k;
        cin >> n;
        vector<int> prefix(n), suffex(n);
        for (int i = 0; i < n; i++)
        {
            cin >> prefix[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> suffex[i];
        }

        if (prefix[n - 1] != suffex[0])
        {
            cout << "NO" << endl;
        }
        else
        {
            int temp = 0;
            for (int i = 1; i < n; i++)
            {
                if (__gcd(prefix[i - 1], suffex[i]) != suffex[0] || prefix[i - 1] % prefix[i] != 0 || suffex[i] % suffex[i - 1] != 0)
                {
                    temp++;
                    break;
                }
            }
            if (temp > 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}