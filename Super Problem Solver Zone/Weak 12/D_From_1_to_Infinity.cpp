#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    while (t--) {
        ll k, ans = 0;
        cin >> k;
        ll cur = 9, len = 1;
        while (k - cur * len > 0) {
            k -= cur * len;
            cur *= 10;
            len++;
        }
        string s = to_string(cur / 9 + (k - 1) / len);
        for (int i = 0; i < (k - 1) % len + 1; i++) {
            ans += s[i] - '0';
        }
        ll pr_s = 0;
        for (int i = 0; i < (int)s.length(); i++) {
            int curd = s[i] - '0';
            if (curd) {
                ans += curd * (len - 1) * cur / 2 + curd * (2 * pr_s + curd - 1) / 2 * cur / 9;
            }
            cur /= 10;
            len--;
            pr_s += curd;
        }
        cout << ans << "\n";
    }

    return 0;
};


