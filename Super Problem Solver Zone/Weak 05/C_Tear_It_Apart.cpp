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
        string s;
        cin >> s;
        int res = s.size();
        for (char c = 'a'; c <= 'z'; c++)
        {
            int max_gap = 0, cur = 0;
            for (char ch : s)
            {
                if (ch != c)
                {
                    cur++;
                    if (cur > max_gap)
                        max_gap = cur;
                }
                else
                {
                    cur = 0;
                }
            }
            int ops = 0;
            while (max_gap > 0)
            {
                max_gap /= 2;
                ops++;
            }
            if (ops < res)
                res = ops;
        }
        cout << res << endl;
    }

    return 0;
}
