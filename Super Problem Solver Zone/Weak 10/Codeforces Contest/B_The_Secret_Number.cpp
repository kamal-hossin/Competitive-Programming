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
        long long n;
        cin >> n;
        vector<long long> res;
        long long p = 10;
        while (true)
        {
            long long d = 1 + p;
            if (d > n)
            {
                break;
            }
            if (n % d == 0)
            {
                res.push_back(n / d);
            }
            if (p > 1e18 / 10)
            {
                break;
            }
            p *= 10;
        }
        if (res.empty())
        {
            cout << 0 << endl;
        }
        else
        {
            sort(res.begin(), res.end());
            cout << res.size() << endl;
            for (int i = 0; i < res.size(); i++)
            {
                cout << res[i];
                if (i + 1 < res.size())
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
