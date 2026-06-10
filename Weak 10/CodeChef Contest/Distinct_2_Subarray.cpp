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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int min_len = n + 1;

        for (int i = 0; i < n; i++)
        {
            set<int> s;
            for (int j = i; j < n; j++)
            {
                s.insert(a[j]);
                if (s.size() > 2)
                    break;
                if (s.size() == 2)
                {
                    min_len = min(min_len, j - i + 1);
                    break;
                }
            }
        }

        if (min_len == n + 1)
            cout << -1 << endl;
        else
            cout << min_len << endl;
    }

    return 0;
}
