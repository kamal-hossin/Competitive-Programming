#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
long long a[N], diff[N], op_cnt[N];
int l[N], r[N], d[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= m; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }

    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        op_cnt[x] += 1;
        op_cnt[y + 1] -= 1;
    }

    for (int i = 1; i <= m; i++)
    {
        op_cnt[i] += op_cnt[i - 1];
    }

    for (int i = 1; i <= m; i++)
    {
        long long times = op_cnt[i];
        diff[l[i]] += d[i] * times;
        diff[r[i] + 1] -= d[i] * times;
    }

    for (int i = 1; i <= n; i++)
    {
        diff[i] += diff[i - 1];
        cout << a[i] + diff[i] << " ";
    }
    cout << endl;

    return 0;
}
