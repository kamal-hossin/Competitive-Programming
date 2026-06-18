#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> knight_moves = {
    {-2, -1}, {-2, 1}, {2, -1}, {2, 1},
    {-1, -2}, {-1, 2}, {1, -2}, {1, 2}
};

int bfs(int n, int m, int sx, int sy, int dx, int dy) {
    if (sx == dx && sy == dy) return 0;
    
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;
    
    int steps = 0;
    while (!q.empty()) {
        int size = q.size();
        steps++;
        for (int i = 0; i < size; i++) {
            auto [x, y] = q.front();
            q.pop();
            
            for (auto [dx_move, dy_move] : knight_moves) {
                int nx = x + dx_move;
                int ny = y + dy_move;
                
                if (nx == dx && ny == dy) return steps; 
                
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, sx, sy, dx, dy;
        cin >> n >> m;
        cin >> sx >> sy;
        cin >> dx >> dy;
        cout << bfs(n, m, sx, sy, dx, dy) << endl;
    }
    return 0;
}