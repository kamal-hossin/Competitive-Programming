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
        string S, T;
        cin >> S >> T;

        vector<int> ops;
        bool possible = true;

        for (int i = N - 1; i >= 1; --i) {
            if (S[i] != T[i]) {
                int j = i - 1;
                while (j >= 0 && S[j] != '1') {
                    j--;
                }

                if (j < 0) {
                    possible = false;
                    break;
                }

                for (int k = j; k < i; ++k) {
                    ops.push_back(k + 1);
                    if (S[k + 1] == '0') {
                        S[k + 1] = '1';
                    } else {
                        S[k + 1] = '0';
                    }
                }
            }
        }

        if (S[0] != T[0]) {
            possible = false;
        }

        if (!possible) {
            cout << -1 << "\n";
        } else {
            cout << ops.size() << "\n";
            for (int i = 0; i < ops.size(); ++i) {
                cout << ops[i] << " ";
            }
            if (!ops.empty()) {
                cout << "\n";
            }
        }
    }

    return 0;
}
