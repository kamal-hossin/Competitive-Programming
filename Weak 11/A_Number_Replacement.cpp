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
        string s;
        cin >> s;
        map<int,char> mp;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (mp.count(a[i])) {
                if (mp[a[i]] != s[i]) {
                    ok = false;
                    break;
                }
            } else {
                mp[a[i]] = s[i];
            }
        }
        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
