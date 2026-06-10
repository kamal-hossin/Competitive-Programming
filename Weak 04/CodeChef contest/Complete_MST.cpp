#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;
        
        long long total_edges = (long long)N * (N - 1) / 2;
        
        long long max_zero_edges = min(N - 1, total_edges - M);
        long long count = max_zero_edges + 1;
        long long first = N - 1 - max_zero_edges;
        long long last = N - 1;
        
        long long sum = (first + last) * count / 2;
        
        cout << sum << endl;
    }

    return 0;
}
