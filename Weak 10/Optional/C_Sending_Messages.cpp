#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long f, a, b;
        cin >> n >> f >> a >> b;

        vector<long long> m(n);
        for (int i = 0; i < n; i++) {
            cin >> m[i];
        }

        long long prev = 0;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            long long delta = m[i] - prev;

            long long cost;
            if (delta * a < b) {
                cost = delta * a;
            } else {
                cost = b;
            }

            if (f <= cost) {
                ok = false;
                break;
            }

            f -= cost;
            prev = m[i];
        }

        if (ok) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
