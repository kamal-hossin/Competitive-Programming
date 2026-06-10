#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<ll> a(n);
    ll x = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        x = max(x, a[i]);
    }

    ll z = 0;
    for (int i = 0; i < n; ++i)
    {
        z = __gcd(z, x - a[i]);
    }

    ll y = 0;
    for (int i = 0; i < n; ++i)
    {
        y += (x - a[i]) / z;
    }

    cout << y << " " << z << endl;

    return 0;
}
