#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
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

        string s;
        s.resize(n);
        fill(s.begin(), s.end(), '?');

        unordered_map<char, int> freq;
        char next_char = 'a';

        for (int i = 0; i < n; ++i) {
            if (a[i] == 0) {
                while (freq.count(next_char)) {
                    next_char++;
                }
                s[i] = next_char;
                freq[next_char]++;
            } else {
                for (auto &p : freq) {
                    if (p.second == a[i]) {
                        s[i] = p.first;
                        p.second++;
                        break;
                    }
                }
            }
        }

        cout << s << "\n";
    }

    return 0;
}
