#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1010;
int a[MAXN][MAXN];
int p[4] = {0, 0, -1, 1};
int r[4] = {-1, 1, 0, 0};

int dfs(int x, int y)
{
    int ret = a[x][y];
    a[x][y] = 0;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + p[i];
        int ny = y + r[i];
        if (a[nx][ny])
        {
            ret += dfs(nx, ny);
        }
    }
    return ret;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        memset(a, 0, sizeof(a));
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i][j])
                {
                    ans = max(ans, dfs(i, j));
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
