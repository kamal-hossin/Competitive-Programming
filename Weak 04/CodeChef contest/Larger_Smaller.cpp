#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        int mini = 101, maxi = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            mini = min(mini, A[i]);
            maxi = max(maxi, A[i]);
        }

        int ans = max(0, maxi - mini - 1);
        cout << ans << endl;
    }

    return 0;
}


