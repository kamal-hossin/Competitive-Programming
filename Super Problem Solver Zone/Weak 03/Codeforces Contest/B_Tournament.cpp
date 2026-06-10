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
        int n, j, k;
        cin >> n >> j >> k;

        vector<int> a(n);
        int maximum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > maximum)
            {
                maximum = a[i];
            }
        }

        j--;

        if (k > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (a[j] == maximum)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
