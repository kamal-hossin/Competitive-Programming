#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) { 
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<int>> grid(n, vector<int>(m)); 

        int number = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                grid[i][j] = number; 
                number++;
                if (number > k) {
                    number = 1; 
                }
            }
        }

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << grid[i][j] << " "; 
            }
            cout << endl; 
        }
    }

    return 0;
}
