#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        bool found = false;
        for (int b = 2; b <= r - 2; b += 2) {
            int a = 2;
            int sum = a + b;
            if (sum >= l && sum <= r) {
                cout << a << " " << b << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << "\n";
        }
    }

    return 0;
}
