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
        long long n;
        cin >> n;
        long long ans = 0, exp = 0, power = 1;
        while (n > 0)
        {
            ans += (n % 3) * (power * 3 + power / 3 * exp);
            n /= 3;
            exp++;
            power *= 3;
        }
        cout << ans << endl;
    }

    return 0;
}
