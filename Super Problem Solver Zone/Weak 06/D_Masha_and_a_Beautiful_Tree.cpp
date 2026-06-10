#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool ok = false;
        int ans = 0;
        for (int k = 1; k < n; k <<= 1) {
            for (int i = 0; i < n; i += 2 * k) {
                if (abs(a[i] - a[i + k]) != k) {
                   ok = true;
                }
                if (a[i] > a[i + k]) {
                    int temp = a[i];
                    a[i] = a[i + k];
                    a[i + k] = temp;
                    ans++;
                }
            }
        }
        if (ok) {
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }

    return 0;
}
