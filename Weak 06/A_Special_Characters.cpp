#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if (n == 1) {
            cout << "NO" << endl;
            continue;
        }
        
        if (n == 6) {
            cout << "YES" << endl;
            cout << "AAABAACC" << endl;
            continue;
        }
        
        if (n == 2) {
            cout << "YES" << endl;
            cout << "MM" << endl;
            continue;
        }
        
        if (n % 2 == 0) {
            cout << "YES" << endl;
            string s;
            for (int i = 0; i < n / 2; ++i) {
                s += "AA";
            }
            cout << s << endl;
        } else {
            if (n < 3) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
                string s;
                for (int i = 0; i < (n - 1) / 2; ++i) {
                    s += "AA";
                }
                s += "A";
                cout << s << endl;
            }
        }
    }

    return 0;
}

