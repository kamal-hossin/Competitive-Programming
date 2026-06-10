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
        int ans = 0;
        int lastParity = -1;
        for (int i = 0; i < n; i++)
        {
            int curParity = a[i] % 2;
            if (curParity != lastParity)
            {
                ans++;
                lastParity = curParity;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
