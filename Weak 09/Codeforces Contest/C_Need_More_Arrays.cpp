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
        multiset<int> s;

        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        int result = 0;
        while (!s.empty())
        {
            int prev = -2;
            auto it = s.begin();
            while (it != s.end())
            {
                if (*it > prev + 1)
                {
                    prev = *it;
                    it = s.erase(it);
                }
                else
                {
                    ++it;
                }
            }

            result++;
        }

        cout << result << '\n';
    }

    return 0;
}
