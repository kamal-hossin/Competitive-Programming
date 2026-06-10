#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> chimps(n);
    for (int i = 0; i < n; i++) {
        cin >> chimps[i];
    }

    int q;
    cin >> q;
    while (q--) {
        int luchu;
        cin >> luchu;

        int left = 0, right = n - 1;
        int shorter = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (chimps[mid] < luchu) {
                shorter = chimps[mid];
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        left = 0, right = n - 1;
        int taller = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (chimps[mid] > luchu) {
                taller = chimps[mid];
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        if (shorter == -1) cout << "X ";
        else cout << shorter << " ";
        if (taller == -1) cout << "X\n";
        else cout << taller << "\n";
    }

    return 0;
}
