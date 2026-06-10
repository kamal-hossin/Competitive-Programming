#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(2 * N);
        for (int i = 0; i < 2 * N; ++i) {
            cin >> A[i];
        }
        sort(A.rbegin(), A.rend());
        long long score = 0;
        for (int i = 0; i < N; ++i) {
            score += A[i];
        }
        cout << score << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}