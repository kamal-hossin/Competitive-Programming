#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        priority_queue<long long> pq;
        pq.push(sum);

        multiset<long long> ms;
        for (int i = 0; i < n; i++)
        {
            ms.insert(a[i]);
        }

        bool ok = true;
        while (!pq.empty())
        {
            long long current = pq.top();
            pq.pop();

            auto it = ms.find(current);
            if (it != ms.end())
            {
                ms.erase(it);
            }
            else
            {
                if (ms.empty() || current < *ms.rbegin())
                {
                    ok = false;
                    break;
                }
                long long half1 = current / 2;
                long long half2 = (current + 1) / 2;
                pq.push(half1);
                pq.push(half2);
            }
        }

        if (ok && ms.empty())
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
