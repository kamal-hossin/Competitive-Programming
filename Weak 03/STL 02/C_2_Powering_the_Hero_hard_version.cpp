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

        vector<int> s(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> s[i];
        }

        priority_queue<int> pq;
        long long total_power = 0;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 0)
            {
                if (!pq.empty())
                {
                    total_power += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(s[i]);
            }
        }

        cout << total_power << endl;
    }

    return 0;
}
