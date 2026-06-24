#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool vis[105][105];
vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; 
int n, m;

bool isValid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

void dfs(int x, int y, int &roomCount) {
    vis[x][y] = true; 
    roomCount++;

    for (auto d : directions) {
        int nx = x + d.first, ny = y + d.second;
        if (isValid(nx, ny) && !vis[nx][ny] && grid[nx][ny] == '.') {
            dfs(nx, ny, roomCount);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    vector<int> rooms;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && grid[i][j] == '.') { 
                int roomCount = 0;
                dfs(i, j, roomCount);
                rooms.push_back(roomCount);
            }
        }
    }

    if (rooms.empty()) {
        cout << 0 << endl; 
    } else {
        sort(rooms.begin(), rooms.end());
        for (int r : rooms) {
            cout << r << " ";
        }
        cout << endl;
    }

    return 0;
}
