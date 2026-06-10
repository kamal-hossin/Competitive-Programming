#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = i + 1;
        }

        if (n == 1) {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++) {
            if (b[i] == a[i]) {
                if (i == n - 1) {
                    swap(b[i], b[i - 1]);
                } else {
                    swap(b[i], b[i + 1]);
                }
            }
        }

        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (b[i] == a[i]) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            for (int i = 0; i < n; i++) {
                b[i] = i + 1;
            }
            for (int i = n - 1; i >= 0; i--) {
                if (b[i] == a[i]) {
                    if (i == 0) {
                        swap(b[i], b[i + 1]);
                    } else {
                        swap(b[i], b[i - 1]);
                    }
                }
            }
            ok = true;
            for (int i = 0; i < n; i++) {
                if (b[i] == a[i]) {
                    ok = false;
                    break;
                }
            }
            if (!ok) {
                cout << -1 << endl;
                continue;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << b[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}
