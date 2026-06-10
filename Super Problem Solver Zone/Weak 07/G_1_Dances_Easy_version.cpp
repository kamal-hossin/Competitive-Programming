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
        int n, m;
        cin >> n >> m;

        vector<int> a(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }

        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> c(n);
        c[0] = 1;
        for (int i = 1; i < n; i++)
        {
            c[i] = a[i - 1];
        }

        sort(c.begin(), c.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0, matched = 0;
        while (i < n && j < n)
        {
            if (c[i] < b[j])
            {
                matched++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }

        cout << (n - matched) << endl;
    }

    return 0;
}
