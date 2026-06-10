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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                a[i] = -1;
            } else {
                a[i] = 3;
            }
        }
        if (n % 2 == 0) {
            a[n - 1] = 2;
        }
        for (int i = 0; i < n; i++) {
            cout << a[i];
            if (i != n - 1) {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
