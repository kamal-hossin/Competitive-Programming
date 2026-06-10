#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<vector<int>> grid(N, vector<int>(N));
        if (N == 1) {
            cout << "0\n";
            continue;
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                grid[i][j] = (i + j) % N;
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << grid[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}