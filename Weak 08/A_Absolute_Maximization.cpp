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
        int a[n];
        int max_or = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            max_or |= a[i];
        }

        cout << max_or << endl;
    }

    return 0;
}