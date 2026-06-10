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
        int n, k;
        cin >> n >> k;
        vector<long long> s(k);
        for (int i = 0; i < k; ++i)
        {
            cin >> s[i];
        }

        if (k == 1)
        {
            cout << "Yes\n";
            continue;
        }

        vector<long long> a(k - 1);
        for (int i = 0; i < k - 1; ++i)
        {
            a[i] = s[i + 1] - s[i];
        }

        bool possible = true;
        for (int i = 1; i < k - 1; ++i)
        {
            if (a[i] < a[i - 1])
            {
                possible = false;
                break;
            }
        }

        if (!possible)
        {
            cout << "No\n";
            continue;
        }

        long long m = n - k + 1;
        long long first_a = s[0];
        long long max_rest = a[0];

        if (m * max_rest < first_a)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }

    return 0;
}
