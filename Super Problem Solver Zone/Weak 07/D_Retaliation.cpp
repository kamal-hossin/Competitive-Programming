#include <bits/stdc++.h>
using namespace std;
typedef long long l;

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
        vector<l> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        l d = a[1] - a[0];
        l u = a[0] - d;
        l v = n + 1;
        bool f = true;

        for (int i = 1; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] != d)
            {
                f = false;
            }
        }

        if (!f || u < 0 || u % v != 0)
        {
            cout << "NO\n";
        }
        else
        {
            if ((u / v + d) < 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
    return 0;
}
