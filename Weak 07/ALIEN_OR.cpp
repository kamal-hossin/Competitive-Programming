#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;

        vector<int> nums(N);
        for (int i = 0; i < N; i++)
        {
            string s;
            cin >> s;
            int val = 0;
            for (int j = 0; j < K; j++)
            {
                val = val * 2 + (s[j] - '0');
            }
            nums[i] = val;
        }

        int limit = 1 << K;
        vector<bool> can(limit, false);
        can[0] = true;

        for (int i = 0; i < N; i++)
        {
            vector<bool> next = can;
            for (int j = 0; j < limit; j++)
            {
                if (can[j])
                {
                    next[j | nums[i]] = true;
                }
            }
            can = next;
        }

        bool ok = true;
        for (int i = 1; i < limit; i++)
        {
            if (!can[i])
            {
                ok = false;
                break;
            }
        }

        if (ok)
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
