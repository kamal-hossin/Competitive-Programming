#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int left = 0;
        int right = n + 1;
        int answer = 0;
        
        while (left <= right) {
            int mid = (left + right) / 2;
            unordered_map<int, int> freq;
            for (int num : a) {
                if (num < mid) {
                    freq[num]++;
                }
            }
            
            bool possible = true;
            for (int i = 0; i < mid; ++i) {
                if (freq[i] < k) {
                    possible = false;
                    break;
                }
            }
            
            if (possible) {
                answer = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        cout << answer << '\n';
    }
    
    return 0;
}