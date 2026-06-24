#include <bits/stdc++.h>
using namespace std;

char grid[105][105]; 
bool vis[105][105];   
vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; 
int n, m;

bool isValid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int x, int y) {
    vis[x][y] = true;

    for (auto d : directions) {
        int nx = x + d.first;
        int ny = y + d.second;

        if (isValid(nx, ny) && !vis[nx][ny] && grid[nx][ny] == '.') {
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));  

    int apartments = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && grid[i][j] == '.') { 
                dfs(i, j);
                apartments++; 
            }
        }
    }

    cout << apartments << endl;

    return 0;
}
