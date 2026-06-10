#include <bits/stdc++.h>
using namespace std;

vector<int> v[100001];
int d[100001];
int n, m;
int ans = 0;

void dfs(int x, int y, int cnt)
{
    if (d[y]) {
        cnt++;
    } else {
        cnt = 0;
    }

    if (cnt > m) {
        return;
    }

    if (v[y].size() == 1 && y != 1) {
        ans++;
    }

    for (int i = 0; i < v[y].size(); i++) {
        int z = v[y][i];
        if (z != x) {
            dfs(y, z, cnt);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> d[i];
    }

    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(0, 1, 0);

    cout << ans << endl;
    return 0;
}
