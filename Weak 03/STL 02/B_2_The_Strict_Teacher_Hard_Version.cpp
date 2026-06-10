#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> teachers(m);
        for (int i = 0; i < m; ++i) {
            cin >> teachers[i];
        }

        sort(teachers.begin(), teachers.end()); // Binary search-এর জন্য

        while (q--) {
            int david;
            cin >> david;

            // Binary search করে কাছের দুইটা শিক্ষক খুঁজি
            auto it = lower_bound(teachers.begin(), teachers.end(), david);
            int minDist = 1e9;

            if (it != teachers.end()) {
                minDist = min(minDist, abs(*it - david));
            }
            if (it != teachers.begin()) {
                --it;
                minDist = min(minDist, abs(*it - david));
            }

            cout << minDist << '\n';
        }
    }

    return 0;
}
