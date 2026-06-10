#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        for (int i = 0; i <= n - 3; ++i) {
            if (s[i] == '1' && s[i+1] == '1' && s[i+2] == '1') {
                s[i] = '1', s[i+1] = '0', s[i+2] = '0';
            } 
            else if (s[i] == '1' && s[i+1] == '1' && s[i+2] == '0') {
                s[i] = '1', s[i+1] = '0', s[i+2] = '0';
            }
            else if (s[i] == '0' && s[i+1] == '1' && s[i+2] == '1') {
                s[i] = '1', s[i+1] = '0', s[i+2] = '0';
            }
            else if (s[i] == '0' && s[i+1] == '0' && s[i+2] == '1') {
                s[i] = '1', s[i+1] = '0', s[i+2] = '0'; 
            }
        }

        cout << s << '\n';
    }

    return 0;
}
