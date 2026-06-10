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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int odd_sum = 0, even_sum = 0;

        for (int i = 0; i < n; ++i)
        {
            if ((i + 1) % 2 == 1)
            {
                odd_sum += a[i];
            }
            else
            {
                even_sum += a[i];
            }
        }

        if (odd_sum > even_sum)
        {
            cout << odd_sum << endl;
        }
        else
        {
            cout << even_sum << endl;
        }
    }

    return 0;
}
