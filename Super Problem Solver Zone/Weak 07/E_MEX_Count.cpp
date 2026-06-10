#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        map<int, int> m;

        int mex = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == mex) {
                mex++;
            }
            m[a[i]]++;
        }

        vector<int> ans(n + 2, 0);
        int prev = 0;

        for (int i = 0; i <= mex; i++) {
            ans[m[i]]++;
            ans[n - i + 1]--;
        }

        int sum = 0;
        for (int i = 0; i < n + 1; i++) {
            sum += ans[i];
            cout << sum << ' ';
        }

        cout << endl;
    }

    return 0;
}
