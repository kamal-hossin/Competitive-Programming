#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int root = 0;
        bool possible = false;

        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                possible = true;
                root = i;
                break;
            }
        }

        if (!possible) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            for (int i = 1; i < n; i++) {
                if (a[i] != a[0]) {
                    cout << 1 << " " << (i + 1) << "\n";
                }
            }
            for (int i = 1; i < n; i++) {
                if (a[i] == a[0]) {
                    cout << (root + 1) << " " << (i + 1) << "\n";
                }
            }
        }
    }

    return 0;
}
