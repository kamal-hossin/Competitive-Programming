#include <bits/stdc++.h>
using namespace std;

const int N = 105, M = 100005;
int n, a[N];
bool dp[N][M];
bool vis[N][M];

bool f(int i, int sum) {
    if (sum == 0) {
        return true;
    }
    if (i > n) {
        return false;
    }
    if (vis[i][sum]) {
        return dp[i][sum];
    }
    vis[i][sum] = true;

    bool ans = false;
    if (a[i] <= sum) {
        ans = ans || f(i + 1, sum - a[i]);
    }
    ans = ans || f(i + 1, sum);

    return dp[i][sum] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    vector<int> ans;
    for (int targetSum = 1; targetSum <= sum; targetSum++) {
        if (f(1, targetSum)) {
            ans.push_back(targetSum);
        }
    }

    cout << ans.size() << '\n';
    for (auto value : ans) {
        cout << value << " ";
    }
    cout << '\n';

    return 0;
}
