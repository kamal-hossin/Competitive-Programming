#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> p(n + 1);
        vector<int> pos(n + 1); // pos[val] = index of val in p
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            int idx = pos[k];

            if (idx < l || idx > r) {
                cout << "-1\n"; // k is not in [l, r]
                continue;
            }

            int d = 0;
            int left = l, right = r;
            bool found = false;
            while (left <= right) {
                int mid = (left + right) / 2;
                if (p[mid] == k) {
                    found = true;
                    break;
                } else if (p[mid] < k) {
                    if (mid == idx || (mid != idx && p[mid] >= k)) d++;
                    left = mid + 1;
                } else {
                    if (mid == idx || (mid != idx && p[mid] <= k)) d++;
                    right = mid - 1;
                }
            }
            if (found) cout << d << "\n";
            else cout << "-1\n";
        }
    }
    return 0;
}