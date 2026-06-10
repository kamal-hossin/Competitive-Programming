#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h(n);
        int max_h = 0;
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
            sum += h[i];
            if (h[i] > max_h) {
                max_h = h[i];
            }
        }
        if (max_h >= sum - max_h) {
            cout << max_h << endl;
        } else {
            cout << (sum + 1) / 2 << endl;
        }
    }
    return 0;
}