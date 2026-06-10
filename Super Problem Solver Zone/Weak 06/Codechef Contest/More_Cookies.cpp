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
        int n, c;
        cin >> n >> c;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int extra = 0;

        while (true)
        {
            bool hasLess = false;
            bool hasEqual = false;

            for (int i = 0; i < n; i++)
            {
                if (a[i] < c)
                {
                    hasLess = true;
                }
                if (a[i] == c)
                {
                    hasEqual = true;
                }
            }

            if (hasLess && !hasEqual)
            {
                break;
            }

            c++;
            extra++;
        }

        cout << extra << endl;
    }

    return 0;
}
