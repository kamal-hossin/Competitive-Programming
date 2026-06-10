#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<long long> b(n);
        int missing_count = 0;
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            if (b[i] == -1) {
                missing_count++;
            }
        }

        long long possible_x = -1;
        bool possible = true;

        for (int i = 0; i < n; ++i) {
            if (b[i] != -1) {
                long long current_x = a[i] + b[i];
                if (possible_x == -1) {
                    possible_x = current_x;
                } else if (possible_x != current_x) {
                    possible = false;
                    break;
                }
            }
        }

        if (!possible) {
            cout << 0 << endl;
            continue;
        }

        if (possible_x == -1) {
            cout << k + 1 << endl;
            continue;
        }

        for (int i = 0; i < n; ++i) {
            if (b[i] == -1) {
                long long required_b = possible_x - a[i];
                if (required_b < 0 || required_b > k) {
                    possible = false;
                    break;
                }
            }
        }

        if (!possible) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }
    return 0;
}