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

        long long operations = 0;
        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            operations += a[i];
            if (a[i] != 0)
            {
                ok = false;
            }
            if (a[i] == 0 && !ok)
            {
                operations += 1;
            }
        }

        cout << operations << endl;
    }

    return 0;
}
