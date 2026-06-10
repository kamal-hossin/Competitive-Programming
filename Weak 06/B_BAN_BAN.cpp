#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int ops = (n + 1) / 2;  // Number of operations
        cout << ops << '\n';

        for (int i = 0; i < ops; ++i) {
            int left = i + 1;
            int right = 3 * n - 2 * i;
            cout << left << ' ' << right << '\n';
        }
    }
    
    return 0;
}
