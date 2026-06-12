#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        int L = *min_element(x.begin(), x.end());
        int R = *max_element(x.begin(), x.end());

        int ans = 0;
        if (s <= L) {
            ans = R - s;
        } 
        else if (s >= R) {
            ans = s - L;
        } 
        else {
            ans = (R - L) + min(s - L, R - s);
        }

        cout << ans << "\n";
    }

    return 0;
}
