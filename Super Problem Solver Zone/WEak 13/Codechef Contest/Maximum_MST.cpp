#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int M = N * (N - 1) / 2;
        vector<int> W(M);
        for (int i = 0; i < M; i++) cin >> W[i];

        sort(W.begin(), W.end());

        long long ans = 0;
        for (int i = 0; i < N - 1; i++) {
            ans += W[i];
        }
        cout << ans << "\n";
    }
    return 0;
}
