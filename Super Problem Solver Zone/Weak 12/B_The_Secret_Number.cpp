#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> ans;
        for (int k = 1; k <= 18; k++)
        {
            long long d = 1;
            for (int i = 0; i < k; i++)
            {
                d *= 10;
            }
            long long b = d + 1;
            if (n % b == 0)
            {
                ans.push_back(n / b);
            }
        }

        if (ans.empty())
        {
            cout << 0 << "\n";
        }
        else
        {
            sort(ans.begin(), ans.end());
            cout << ans.size() << "\n";
            for (long long x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
