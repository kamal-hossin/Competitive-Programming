#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> sequence(n + 1, 0);
    vector<long long> prefix_sum(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        sequence[i] = (i - 1) / 3 + 1; 
        prefix_sum[i] = prefix_sum[i - 1] + sequence[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << (prefix_sum[r] - prefix_sum[l - 1]) << endl;
    }

    return 0;
}
