#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        string s;
        cin >> s;

        vector<bool> used(n, false);
        long long total_score = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'L' && !used[i]) {
                for (int j = n - 1; j > i; --j) {
                    if (s[j] == 'R' && !used[j]) {
                        long long sum = 0;
                        bool valid = true;
                        for (int k = i; k <= j; ++k) {
                            if (used[k]) {
                                valid = false;
                                break;
                            }
                        }
                        if (valid) {
                            for (int k = i; k <= j; ++k) {
                                sum += a[k];
                            }
                            if (sum > 0) {
                                total_score += sum;
                                for (int k = i; k <= j; ++k) {
                                    used[k] = true;
                                }
                                break; // Move to next 'L' after using this segment
                            }
                        }
                    }
                }
            }
        }

        cout << total_score << '\n';
    }

    return 0;
}