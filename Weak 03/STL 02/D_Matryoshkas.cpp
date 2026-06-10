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
        map<int, int> freq;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int res = 0;
        for (auto &[s, cnt] : freq)
        {
            if (freq.find(s - 1) == freq.end())
            {
                res += cnt;
            }
            else if (cnt > freq[s - 1])
            {
                res += cnt - freq[s - 1];
            }
        }
        cout << res << '\n';
    }

    return 0;
}