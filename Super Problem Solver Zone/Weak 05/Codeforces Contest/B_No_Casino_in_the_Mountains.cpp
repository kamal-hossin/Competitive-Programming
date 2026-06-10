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
        int a[100005];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int result = 0;
        int i = 0;
        while (i <= n - k)
        {
            bool ok = true;
            for (int j = 0; j < k; j++)
            {
                if (a[i + j] == 1)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                result++;
                i += k + 1;
            }
            else
            {
                i++;
            }
        }

        cout << result << endl;
    }

    return 0;
}
