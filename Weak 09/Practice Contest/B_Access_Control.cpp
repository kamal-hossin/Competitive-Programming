#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        string s;
        cin >> s;

        int ans = 0;
        bool valid = true;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                ans = x;
            } else { 
                if (ans == 0) {
                    valid = false; 
                    break;
                } else {
                    ans--;
                }
            }
        }

        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

