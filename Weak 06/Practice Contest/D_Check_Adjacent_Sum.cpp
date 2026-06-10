#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N, Q;
        cin >> N >> Q;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        sort(A.begin(), A.end());
        
        int total_sum = 0;
        for (int num : A) {
            total_sum += num;
        }
        
        int min_f, max_f;
        
        min_f = 2 * total_sum - (A[N-1] + A[N-2]);
        
        max_f = 2 * total_sum - (A[0] + A[1]);
        
        while (Q--) {
            int X;
            cin >> X;
            
            if (X >= min_f && X <= max_f) {
                for (int i = 0; i < N; ++i) {
                    cout << A[i] << " ";
                }
                cout << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}

