#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;

        int i = 0, j = 0, k = 0, l = 0;
        bool flag = true;

        while (j != p.size() || l != s.size()) {
            while (j < p.size() && p[i] == p[j]) {
                j++;
            }
            while (l < s.size() && s[k] == s[l]) {
                l++;
            }
            if (2 * (j - i) < (l - k) || (j - i) > (l - k) || p[i] != s[k]) {
                flag = false;
                break;
            }
            i = j;
            k = l;
        }

        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
