#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;

        auto count_good_numbers = [](long long n) {
            if (n == 0) {
                return 0LL;
            }
            int small_primes[] = {2, 3, 5, 7};
            long long count = 0;
            for (int i = 0; i < (1 << 4); i++) {
                long long p_product = 1;
                int size = 0;
                for (int j = 0; j < 4; j++) {
                    if ((i >> j) & 1) {
                        p_product *= small_primes[j];
                        size++;
                    }
                }
                if (size % 2 == 0) {
                    count += n / p_product;
                } else {
                    count -= n / p_product;
                }
            }
            return count;
        };

        long long ans = count_good_numbers(r) - count_good_numbers(l - 1);
        cout << ans << endl;
    }
    return 0;
}
