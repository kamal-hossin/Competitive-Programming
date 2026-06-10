#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
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
        
        sort(a.begin(), a.end());
        
        long long min_type1 = 1e18;
        for (int k = 0; k <= a.back(); ++k) {
            // Number of monsters that die in the first k waves
            int cnt = upper_bound(a.begin(), a.end(), k) - a.begin();
            // Total damage from type2 spell: k waves
            long long total_type1 = 0;
            for (int i = cnt; i < n; ++i) {
                total_type1 += a[i] - k;
            }
            if (total_type1 < min_type1) {
                min_type1 = total_type1;
            }
        }
        
        cout << min_type1 << '\n';
    }
    return 0;
}