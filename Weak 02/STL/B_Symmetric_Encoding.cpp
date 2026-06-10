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
        string b;
        cin >> b;

        set<char> st(b.begin(), b.end());
        string r(st.begin(), st.end());
        unordered_map<char, char> decode;
        int len = r.size();
        for (int i = 0; i < len; ++i) {
            char from = r[i];
            char to = r[len - 1 - i];
            decode[from] = to;
        }

        string result = "";
        for (char ch : b) {
            result += decode[ch];
        }

        cout << result << '\n';
    }

    return 0;
}
