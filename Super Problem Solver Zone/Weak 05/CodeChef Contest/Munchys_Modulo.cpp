#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == i) {
                    continue;
                }
                for (int k = j + 1; k < n; k++) {
                    if (k == i) {
                        continue;
                    }
                    long long sum1 = a[j] + a[k];
                    long long sum2 = a[k] + a[j];
                    if (sum1 != 0) {
                        long long val1 = a[i] % sum1;
                        if (val1 > ans) {
                            ans = val1;
                        }
                    }
                    if (sum2 != 0) {
                        long long val2 = a[i] % sum2;
                        if (val2 > ans) {
                            ans = val2;
                        }
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}

