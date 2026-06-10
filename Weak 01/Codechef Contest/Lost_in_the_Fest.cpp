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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int bh = a[n - 1];
        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= bh)
            {
                idx = 1;
                break;
            }
        }
        cout << n - 1 - idx << endl;
    }

    return 0;
}