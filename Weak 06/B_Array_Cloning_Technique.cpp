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
        vector<int> a(n);
        unordered_map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
        }
        
        int max_freq = 0;
        for (const auto& pair : freq) {
            if (pair.second > max_freq) {
                max_freq = pair.second;
            }
        }
        
        if (max_freq == n) {
            cout << 0 << '\n';
            continue;
        }
        
        int operations = 0;
        int current = max_freq;
        while (current < n) {
            operations += 1;
            int possible_swaps = current;
            operations += min(possible_swaps, n - current);
            current += min(possible_swaps, n - current);
        }
        
        cout << operations << '\n';
    }
    

    return 0;
}


