#include <bits/stdc++.h>
using namespace std;

long long n, m, i, j, t, k, a[200001];
vector<long long> v[200001];

void dfs(long long o, long long p) {
    for (long long i = 0; i < v[o].size(); i++) {
        long long x = v[o][i];
        if (x != p) {
            dfs(x, o);
            a[o] += a[x];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    while (t--) {
        cin >> n;
        k = n - 1;

        while (k--) {
            cin >> i >> j;
            v[i].push_back(j);
            v[j].push_back(i);
        }

        for (i = 2; i <= n; i++) {
            if (v[i].size() == 1) {
                a[i] = 1;
            }
        }

        dfs(1, 1);

        cin >> m;
        while (m--) {
            cin >> i >> j;
            cout << a[i] * a[j] << endl;
        }

        for (i = 0; i <= n; i++) {
            v[i].clear();
            a[i] = 0;
        }
    }

    return 0;
}
