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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_value = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > max_value) {
                max_value = a[i];
            }
        }

        cout << max_value << "\n";
    }

    return 0;
}
