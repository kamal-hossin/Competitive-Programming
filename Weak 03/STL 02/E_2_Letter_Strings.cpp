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

        vector<string> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        long long ans = 0;
        unordered_map<string, int> freq;

        for (int i = 0; i < n; ++i) {
            string s = arr[i];

            for (char c = 'a'; c <= 'k'; c++) {
                if (c != s[0]) {
                    string temp = s;
                    temp[0] = c;
                    ans += freq[temp];
                }
            }

            for (char c = 'a'; c <= 'k'; c++) {
                if (c != s[1]) {
                    string temp = s;
                    temp[1] = c;
                    ans += freq[temp];
                }
            }

            freq[s]++;
        }

        cout << ans << endl;
    }

    return 0;
}
