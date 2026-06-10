#include<bits/stdc++.h>
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
        cin >> n >> k;

        vector<int> a(k);
        priority_queue<int> pq;

        int ones = 0;
        for (int i = 0; i < k; ++i)
        {
            cin >> a[i];
            if (a[i] == 1)
                ones++;
            else
                pq.push(a[i]);
        }

        int operations = 0;
        int pieces = k;

        while (pieces > 1)
        {
            if (ones > 0 && !pq.empty())
            {
                int x = pq.top();
                pq.pop();
                x += 1;
                pq.push(x);
                ones--;
                operations++;
                pieces--;
            }
            else if (ones >= 2)
            {
                ones -= 2;
                pq.push(2);
                operations++;
                pieces--;
            }
            else if (!pq.empty())
            {
                int x = pq.top();
                pq.pop();
                if (x == 2)
                {

                    ones += 2;
                }
                else
                {

                    ones++;
                    pq.push(x - 1);
                }
                operations++;
                pieces++;
            }
        }

        cout << operations << '\n';
    }

    return 0;
}

