#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int a = 0, b = x;
        int min_diff = INT_MAX;

        for (int i = max(0, x - 100); i <= x; i++) {
            int j = i ^ x;
            if (j >= i && j <= x) {
                if (j - i < min_diff) {
                    min_diff = j - i;
                    a = i;
                    b = j;
                }
            }
        }
        cout << a << " " << b << endl;
    }

    return 0;
}
