#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;

        long long maxNCoins = min(S / n, a);
        long long rem = S - maxNCoins * n;

        if (rem <= b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
