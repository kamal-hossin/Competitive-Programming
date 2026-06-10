#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int m;
        cin >> m;

        map<int, int> paint_count;
        for (int i = 0; i < m; i++) {
            int d;
            cin >> d;
            if (paint_count.count(d)) {
                paint_count[d]++;
            } else {
                paint_count[d] = 1;
            }
        }

        map<int, int> need;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                if (need.count(b[i])) {
                    need[b[i]]++;
                } else {
                    need[b[i]] = 1;
                }
            }
        }

        bool possible = true;
        map<int, int>::iterator it = need.begin();
        while (it != need.end()) {
            int color = it->first;
            int count_needed = it->second;

            if (paint_count.count(color) == 0 || paint_count[color] < count_needed) {
                possible = false;
                break;
            }

            it++;
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
