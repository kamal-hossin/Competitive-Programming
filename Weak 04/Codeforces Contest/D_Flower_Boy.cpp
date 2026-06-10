#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        // Sorting both arrays
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        // Try to find if we can collect 'm' flowers without adding any new one
        int collected = 0;
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (a[i] >= b[j]) {
                collected++;
                j++;
            }
            i++;
        }

        if (collected == m) {
            cout << 0 << endl;
            continue;
        }

        // Try to find the minimum value of k needed to collect the flowers
        // For each missing flower, calculate the smallest beauty k required to satisfy the condition
        int k_needed = -1;
        for (int i = 0; i < m; i++) {
            if (b[i] > a[i]) {
                k_needed = b[i];
                break;
            }
        }

        cout << k_needed << endl;
    }

    return 0;
}
