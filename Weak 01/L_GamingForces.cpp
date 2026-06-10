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
        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }
        
        int min_h = *min_element(h.begin(), h.end());
        int total_spells = 0;
        
        // Calculate the number of Spell 1 casts (each affects two monsters)
        int spell1 = min_h;
        total_spells += spell1;
        
        // Calculate the remaining health after Spell 1 casts
        for (int i = 0; i < n; ++i) {
            h[i] -= spell1;
        }
        
        // The remaining health is dealt with Spell 2 (one cast per health point)
        int remaining_health = 0;
        for (int i = 0; i < n; ++i) {
            remaining_health += h[i];
        }
        total_spells += remaining_health;
        
        cout << total_spells << '\n';
    }
    
    return 0;
}