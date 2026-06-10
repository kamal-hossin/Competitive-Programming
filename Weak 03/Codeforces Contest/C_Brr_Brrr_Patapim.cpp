#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        int size = 2 * n;
        vector<vector<int>> grid(n, vector<int>(n));
        vector<int> p(size + 1, 0); 
        vector<bool> used(size + 1, false);

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> grid[i][j];

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int pos = i + j + 2; 
                if (p[pos] == 0) {
                    p[pos] = grid[i][j];
                    used[grid[i][j]] = true;
                }
            }
        }

        
        for (int i = 1; i <= size; ++i) {
            if (!used[i]) {
                p[1] = i;
                break;
            }
        }

        for (int i = 1; i <= size; ++i) {
            cout << p[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
