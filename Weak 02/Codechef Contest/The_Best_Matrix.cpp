#include <bits/stdc++.h>
using namespace std;

int BestMatrix(int n, int m, vector<vector<int>>& matrix) {
    int changes = 0;

    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < m - 1; ++j) {
            int up = matrix[i - 1][j];
            int down = matrix[i + 1][j];
            int left = matrix[i][j - 1];
            int right = matrix[i][j + 1];
            int current = matrix[i][j];

            int expectedVertical = 2 * up + down;
            if (current != expectedVertical) {
                matrix[i][j] = expectedVertical;
                changes++;
            }

            int expectedHorizontal = 2 * left + right;
            if (current != expectedHorizontal) {
                matrix[i][j] = expectedHorizontal;
                changes++;
            }
        }
    }
    return changes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<vector<int>> matrix(n, vector<int>(m));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }
        
        int changes = BestMatrix(n, m, matrix);
        cout << changes << endl;
    }
    
    return 0;
}
