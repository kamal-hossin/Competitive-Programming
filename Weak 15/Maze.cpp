#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int n, m;
vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // Right, Left, Up, Down

bool isValid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] != '#' && !vis[i][j]);
}

bool dfs(int x, int y, int dx, int dy) {
    if (x == dx && y == dy) return true; // Reached destination
    
    vis[x][y] = true;
    for (auto [dx_move, dy_move] : directions) {
        int nx = x + dx_move;
        int ny = y + dy_move;
        
        if (isValid(nx, ny)) {
            if (dfs(nx, ny, dx, dy)) {
                if (grid[nx][ny] != 'R' && grid[nx][ny] != 'D') {
                    grid[nx][ny] = 'X';
                }
                return true;
            }
        }
    }
    return false;
}

int main() {
    cin >> n >> m;
    int sx, sy, dx, dy;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'R') {
                sx = i, sy = j;
            }
            if (grid[i][j] == 'D') {
                dx = i, dy = j;
            }
        }
    }
    
    memset(vis, false, sizeof(vis));
    dfs(sx, sy, dx, dy);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
    
    return 0;
}