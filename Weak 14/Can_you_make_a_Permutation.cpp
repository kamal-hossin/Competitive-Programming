#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        unordered_set<int> word;
    
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            word.insert(arr[i]);
        }
    
        int mis = 0;
        for (int i = 1; i <= n; i++) {
            if (word.find(i)==word.end()) {
                mis++;
            }
        }
    
        if (mis <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
