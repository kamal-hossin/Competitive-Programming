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
        vector<int> a(n);
        int maxA = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > maxA) {
                maxA = a[i];
            }
        }
        sort(a.begin(), a.end());

        int low = 0, high = maxA;
        int answer = maxA;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int alive = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] > mid) {
                    alive++;
                }
            }
            int total_time = mid + alive;
            if (total_time < answer) {
                answer = total_time;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << answer << endl;
    }

    return 0;
}