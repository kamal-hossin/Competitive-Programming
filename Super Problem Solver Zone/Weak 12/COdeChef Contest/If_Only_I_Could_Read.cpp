#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        bool found = false;
        int l = -1, r = -1;
        
        for (int i = 0; i < n - 1; i++) {
            if (a[i] != a[i+1]) {
                l = i + 1;
                r = i + 2;
                found = true;
                break;
            }
        }
        
        if (found) {
            cout << l << " " << r << "\n";
        } else {
            cout << "-1\n";
        }
    }
    
    return 0;
}
