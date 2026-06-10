#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long h;
        int n;
        cin >> h >> n;
        vector<long long> a(n),c(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }

        long long low = 1;
        long long high = 200000000000000LL;
        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long current_damage = 0;

            for (int i = 0; i < n; i++) {
                long long uses = (mid - 1) / c[i] + 1;
                if (a[i] > h / uses) {
                    current_damage = h;
                    break;
                }
                current_damage += a[i] * uses;
                if (current_damage >= h) {
                    break;
                }
            }

            if (current_damage >= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}


