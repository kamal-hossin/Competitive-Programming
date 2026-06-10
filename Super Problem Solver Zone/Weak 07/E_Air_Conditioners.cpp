#include <bits/stdc++.h>
using namespace std;
const int max_n = 3e5 + 10;
long long a[max_n];
long long t[max_n];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s;
    cin >> s;
    while (s--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i <= n; i++)
        {
            t[i] = 9999999999;
        }

        for (int i = 1; i <= m; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= m; i++)
        {
            cin >> t[a[i]];
        }

        for (int i = 1; i <= n; i++)
        {
            t[i] = min(t[i], t[i - 1] + 1);
        }

        for (int i = n - 1; i >= 1; i--)
        {
            t[i] = min(t[i], t[i + 1] + 1);
        }

        for (int i = 1; i <= n; i++)
        {
            cout << t[i] << ' ';
        }

        cout << endl;
    }

    return 0;
}
