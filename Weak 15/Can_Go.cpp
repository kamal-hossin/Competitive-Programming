#include <bits/stdc++.h>
using namespace std;

char grid[105][105]; 
bool vis[105][105]; 
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

pair<int, int> start, end_point;
bool found = false;

bool valid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void dfs(int si, int sj) {
    if (found) return; 
    vis[si][sj] = true;

    if (si == end_point.first && sj == end_point.second) {
        found = true;
        return;
    }

    for (int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'B')) {
            dfs(ci, cj);
        }
    }
}

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') start = {i, j};   
            if (grid[i][j] == 'B') end_point = {i, j}; 
        }
    }

    memset(vis, false, sizeof(vis));
    
    dfs(start.first, start.second);

    if (found) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl;   
    }

    return 0;
}
