#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;
        string t;
        cin >> t;

        string res = "";

        int i = n - 1;
        while (i >= 0) {
            if (t[i] == '0') {
                int num = (t[i - 2] - '0') * 10 + (t[i - 1] - '0');
                char ch = 'a' + num - 1;
                res += ch;
                i -= 3;
            } else {
                int num = t[i] - '0';
                char ch = 'a' + num - 1;
                res += ch;
                i--;
            }
        }

        reverse(res.begin(), res.end());
        cout << res << '\n';
    }

    return 0;
}
