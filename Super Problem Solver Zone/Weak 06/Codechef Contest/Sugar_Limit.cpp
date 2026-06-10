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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int result = INT_MIN;

        for (int l = 0; l <= 100; l++)
        {
            int s = 0;
            for (int i = 0; i < n; i++)
            {
                if (b[i] <= l)
                {
                    if (a[i] > 0)
                    {
                        s += a[i];
                    }
                }
            }
            int possible = s - l;
            if (possible > result)
            {
                result = possible;
            }
        }

        cout << result << endl;
    }

    return 0;
}
