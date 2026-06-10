#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long k, x;
        cin >> k >> x;

        long long initial_cakes = 1LL << k;
        long long total_cakes = 1LL << (k + 1);

        if (x == initial_cakes) {
            cout << 0 << "\n\n";
            continue;
        }

        long long chocola = x;
        vector<int> ops;

        while (chocola != initial_cakes) {
            long long vanilla = total_cakes - chocola;

            if (chocola < initial_cakes) {
                ops.push_back(1);
                chocola *= 2;
            } else {
                ops.push_back(2);
                chocola = chocola - vanilla;
            }
        }

        reverse(ops.begin(), ops.end());

        cout << ops.size() << "\n";
        for (int i = 0; i < ops.size(); i++) {
            cout << ops[i];
            if (i + 1 < ops.size()) {
                cout << " ";
            } else {
                cout << "\n";
            }
        }
        if (ops.empty()) {
            cout << "\n";
        }
    }

    return 0;
}
