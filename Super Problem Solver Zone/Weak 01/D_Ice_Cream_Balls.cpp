#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long left = 1, right = 2000000000;
        long long k = 0;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long pair_count = mid * (mid - 1) / 2;
            if (pair_count <= n) {
                k = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        long long pair_count = k * (k - 1) / 2;
        long long x = n - pair_count;
        long long min_balls = k + x;

        if (k + 1 <= 2000000000) {
            long long next_pair = (k + 1) * k / 2;
            if (next_pair <= n) {
                x = n - next_pair;
                min_balls = min(min_balls, (k + 1) + x);
            } else {
                x = n - pair_count;
                min_balls = min(min_balls, k + x);
            }
        }

        cout << min_balls << endl;
    }

    return 0;
}
