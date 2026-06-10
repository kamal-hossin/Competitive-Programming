#include<bits/stdc++.h>
using namespace std;

bool is_valid(int n, const vector<int>& a, const vector<int>& p) {
    for (int i = 0; i < n; ++i) {
        int person = p[i];
        int reported_ahead = a[person - 1];
        int count = 0;
        bool possible_front = false;
        for (int j = 0; j < i; ++j) {
            count++;
        }
        if (count == reported_ahead) {
            possible_front = true;
        }

        count = 0;
        bool possible_back = false;
        for (int j = i + 1; j < n; ++j) {
            count++;
        }
        if (count == reported_ahead) {
            possible_back = true;
        }

        if (!possible_front && !possible_back) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> counts;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            counts[a[i]]++;
        }

        long long ans = 1;
        long long mod = 998244353;
        long long factorial[n + 1];
        factorial[0] = 1;
        for (int i = 1; i <= n; ++i) {
            factorial[i] = (factorial[i - 1] * i) % mod;
        }

        for (auto const& [val, count] : counts) {
            if (val >= n) {
                ans = 0;
                break;
            }
            if (count > 2) {
                ans = 0;
                break;
            }
            if (count == 2 && val == n - 1) {
                ans = 0;
                break;
            }
            ans = (ans * factorial[count]) % mod;
        }

        cout << ans << endl;
    }
    return 0;
}