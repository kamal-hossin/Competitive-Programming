#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> p;

        for (int i = n - 1; i > x; i--) {
            p.push_back(i);
        }

        
        if (x < n) p.push_back(x);

        for (int i = 0; i < x; i++) {
            p.push_back(i);
        }

        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
