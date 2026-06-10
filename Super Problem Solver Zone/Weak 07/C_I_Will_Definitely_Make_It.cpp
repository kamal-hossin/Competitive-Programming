#include <bits/stdc++.h>
using namespace std;

int a[100005];

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

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int h = a[k];
        int flag = 1;

        sort(a + 1, a + 1 + n);

        int i = 1;
        while (i <= n && a[i] <= h)
        {
            i++;
        }
        i--;

        while (i < n)
        {
            if (a[i + 1] - a[i] > h)
            {
                flag = 0;
            }
            i++;
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
