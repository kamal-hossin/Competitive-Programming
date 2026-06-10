#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        vector<int> ans;
        bool all_ones = true;
        for (int i = 0; i <= N; i++) {
            if (S[i] == '0') {
                all_ones = false;
                break;
            }
        }
        if (all_ones) {
            for (int i = 0; i < N; i++) {
                ans.push_back(i);
            }
        } else {
            int k = 2;
            while (k <= N && S[k] != '0') {
                k++;
            }
            for (int i = 0; i < N; i++) {
                if (i % 2 == 0) {
                    ans.push_back(0);
                } else {
                    ans.push_back(k);
                }
            }
        }
        for (int i = 0; i < N; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}