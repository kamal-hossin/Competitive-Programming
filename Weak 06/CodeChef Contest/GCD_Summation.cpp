#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        
        if (K < N - 1) {
            cout << -1 << endl;
            continue;
        }
        
        if (N == 2) {
            if (K == 1) {
                cout << "1 2" << endl;
            } else {
                cout << K << " " << 2 * K << endl;
            }
            continue;
        }
        
        int G = K - (N - 2);
        if (G <= 0) {
            cout << -1 << endl;
            continue;
        }
        
        vector<int> A;
        A.push_back(G);
        A.push_back(2 * G);
        
        set<int> used;
        used.insert(G);
        used.insert(2 * G);
        
        int current = 1;
        while (A.size() < N) {
            if (used.find(current) == used.end()) {
                A.push_back(current);
                used.insert(current);
            }
            current++;
        }
        
        for (int i = 0; i < N; ++i) {
            cout << A[i] << (i == N - 1 ? "\n" : " ");
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}