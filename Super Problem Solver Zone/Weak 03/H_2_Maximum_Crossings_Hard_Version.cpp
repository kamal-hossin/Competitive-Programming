#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 200005;
int BIT[MAXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        for (int i = 0; i <= n; ++i)
            BIT[i] = 0;

        long long crossings = 0;

        for (int i = n - 1; i >= 0; --i) {
            int idx = a[i] - 1;
            int sum = 0;
            while (idx > 0) {
                sum += BIT[idx];
                idx -= (idx & -idx);
            }
            crossings += sum;

            idx = a[i];
            while (idx <= n) {
                BIT[idx] += 1;
                idx += (idx & -idx);
            }
        }

        cout << crossings << "\n";
    }

    return 0;
}
