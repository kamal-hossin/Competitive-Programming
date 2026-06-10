#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        while (q--) {
            int k, l, r;
            cin >> k >> l >> r;
            --l, --r; 

            long long ans = 0;
            for (int i = l; i <= r; ++i) {
                while (k % a[i] == 0)
                    k /= a[i];
                ans += k;
            }

            cout << ans << '\n';
        }
    }

    return 0;
}
