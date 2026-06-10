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
        long long k;
        cin >> n >> k;
        vector<int> s(n), t_(n);
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            long long r = x % k;
            if (r < (k - r) % k)
            {
                s[i] = r;
            }
            else
            {
                s[i] = (k - r) % k;
            }
        }
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            long long r = x % k;
            if (r < (k - r) % k)
            {
                t_[i] = r;
            }
            else
            {
                t_[i] = (k - r) % k;
            }
        }
        sort(s.begin(), s.end());
        sort(t_.begin(), t_.end());
        if (s == t_)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
