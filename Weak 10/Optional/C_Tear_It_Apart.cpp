#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        int ans = INT_MAX;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            int max_gap = 0;
            int prev = -1;

            for (int i = 0; i < n; i++) {
                if (s[i] == ch) {
                    max_gap = max(max_gap, i - prev - 1);
                    prev = i;
                }
            }

            max_gap = max(max_gap, n - prev - 1);

            int operations = 0;
            int length = max_gap;

            while (length > 0) {
                length /= 2;
                operations++;
            }

            ans = min(ans, operations);
        }

        cout << ans << endl;
    }

    return 0;
}
