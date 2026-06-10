#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        long long H;
        cin >> N >> H;

        long long max_d1 = 0, max_d2 = 0;

        for (int i = 0; i < N; ++i) {
            long long s, d;
            cin >> s >> d;
            if (s == 1) {
                max_d1 = max(max_d1, d);
            } else {
                max_d2 = max(max_d2, d);
            }
        }

        long long ans = LLONG_MAX;

        if (max_d1 > 0) {
            long long t = (H + max_d1 - 1) / max_d1;
            ans = min(ans, t);
        }

        if (max_d2 > 0) {
            long long t = (H + max_d2 - 1) / max_d2;
            ans = min(ans, t * 2);
        }

        if (max_d1 > 0 && max_d2 > 0) {
            long long max_possible_k = (H + max_d2 - 1) / max_d2;
            for (long long k = max_possible_k; k >= max(0LL, max_possible_k - 2); --k) {
                long long remaining = max(0LL, H - k * max_d2);
                if (remaining <= 0) {
                    ans = min(ans, k * 2);
                } else {
                    long long m = (remaining + max_d1 - 1) / max_d1;
                    ans = min(ans, k * 2 + m);
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}