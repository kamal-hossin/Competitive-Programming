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
        long long c;
        cin >> n >> c;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> dp(1 << n, -1);
        dp[0] = 0;

        auto popcount = [](int mask) {
            int count = 0;
            while (mask) {
                count += (mask & 1);
                mask >>= 1;
            }
            return count;
        };

        for (int mask = 1; mask < (1 << n); mask++) {
            int k = popcount(mask);
            long long min_mask_cost = -1;

            for (int i = 0; i < n; i++) {
                if ((mask >> i) & 1) {
                    int prev_mask = mask ^ (1 << i);
                    __int128 current_weight = a[i];
                    if (k > 1) {
                        current_weight <<= (k - 1);
                    }

                    long long current_op_cost = 0;
                    if (current_weight > c) {
                        current_op_cost = 1;
                    }

                    long long total_cost = dp[prev_mask] + current_op_cost;

                    if (min_mask_cost == -1 || total_cost < min_mask_cost) {
                        min_mask_cost = total_cost;
                    }
                }
            }
            dp[mask] = min_mask_cost;
        }

        cout << dp[(1 << n) - 1] << endl;
    }


    return 0;
}


