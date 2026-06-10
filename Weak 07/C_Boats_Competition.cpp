
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        int max_pair = 0;
        for (int s = 2; s <= 2 * n; s++) {
            vector<int> freq(n + 1, 0);
    
            for (int x : a) {
                freq[x]++;
            }
    
            int curr_pair = 0;
            for (int i = 1; i <= n; i++) {
                int j = s - i;
                if (j < 1 || j > n) continue;
    
                if (i == j) {
                    curr_pair += freq[i] / 2;
                } else if (i < j) {
                    int cnt = min(freq[i], freq[j]);
                    curr_pair += cnt;
                    freq[i] -= cnt;
                    freq[j] -= cnt;
                }
            }
            max_pair = max(max_pair, curr_pair);
        }

        cout << max_pair << "\n";
    }

    return 0;
}
