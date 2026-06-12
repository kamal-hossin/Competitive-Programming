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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--;
            r--;

            unordered_set<int> present;
            for (int j = l; j <= r; j++) {
                if (arr[j] >= 0) {
                    present.insert(arr[j]);
                }
            }

            int mex = 0;
            while (present.find(mex) != present.end()) {
                mex++;
            }

            cout << mex << "\n";
        }
    }

    return 0;
}
