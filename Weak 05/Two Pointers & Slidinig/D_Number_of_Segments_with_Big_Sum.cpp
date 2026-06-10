#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long ans = 0, sum = 0;
    int l = 0;
    for (int r = 0; r < n; r++)
    {
        sum += a[r];
        while (sum >= s)
        {

            ans += (n - r);
            sum -= a[l];
            l++;
        }
    }

    cout << ans << endl;
    return 0;
}
