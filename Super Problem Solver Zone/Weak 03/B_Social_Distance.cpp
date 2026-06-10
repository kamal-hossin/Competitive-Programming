#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n > m) {
            cout << "NO" << endl;
            continue;
        }

        sort(a.begin(), a.end(), greater<int>());

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }

        long long ans = sum + n + (a[0] - a.back());

        if (ans <= m) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
