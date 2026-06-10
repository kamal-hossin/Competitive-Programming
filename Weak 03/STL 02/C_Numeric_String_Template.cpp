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
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int m;
        cin >> m;
        vector<string> strings(m);
        for (int i = 0; i < m; ++i) {
            cin >> strings[i];
        }

        for (const string& s : strings) {
            if (s.size() != n) {
                cout << "NO" << endl;
                continue;
            }

            unordered_map<int, char> a_to_char;
            unordered_map<char, int> char_to_a;
            bool valid = true;

            for (int i = 0; i < n; ++i) {
                int num = a[i];
                char c = s[i];

                if (a_to_char.count(num)) {
                    if (a_to_char[num] != c) {
                        valid = false;
                        break;
                    }
                } else {
                    a_to_char[num] = c;
                }

                if (char_to_a.count(c)) {
                    if (char_to_a[c] != num) {
                        valid = false;
                        break;
                    }
                } else {
                    char_to_a[c] = num;
                }
            }

            if (valid) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
