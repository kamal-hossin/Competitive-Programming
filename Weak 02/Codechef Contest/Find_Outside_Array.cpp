#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        unordered_set<int> elements;

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            elements.insert(A[i]);
        }

        bool found = false;

        for (int i = 0; i < N; ++i) {
            for (int j = i; j < N; ++j) {
                int X = A[i] + A[j];
                if (elements.find(X) == elements.end()) {
                    cout << A[i] << " " << A[j] << endl;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}
