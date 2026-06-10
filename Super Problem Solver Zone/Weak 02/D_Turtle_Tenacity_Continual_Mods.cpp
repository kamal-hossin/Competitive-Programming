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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        if (a[0] == a[1]) {
            bool allSame = true;
            for (int i = 1; i < n; i++) {
                if (a[i] != a[0]) {
                    allSame = false;
                    break;
                }
            }
            if (allSame) {
                cout << "NO" << endl;
                continue;
            }
            bool found = false;
            for (int i = 1; i < n; i++) {
                if (a[i] % a[0] != 0) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
