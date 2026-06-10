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
        long long x = 0;
        long long y = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 1)
            {
                x++;
            }
            else if (a == 0)
            {
                y++;
            }
        }
        long long count = 1LL << y;
        long long ans = x * count;
        cout << ans << endl;
    }

    return 0;
}
