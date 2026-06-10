#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }

    sort(c.begin(), c.end());

    long long ans = 0;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (c[l] + c[r] > 0)
        {
            ans += r - l;
            r--;
        }
        else
        {
            l++;
        }
    }

    cout << ans << endl;

    return 0;
}