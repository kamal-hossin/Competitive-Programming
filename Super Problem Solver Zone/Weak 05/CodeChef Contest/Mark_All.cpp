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

        long long min_cost;
        if (a[0] < a[n - 1]) {
            min_cost = a[0];
        } else {
            min_cost = a[n - 1];
        }

        vector<long long> left(n);
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                left[i] = a[i];
            } else {
                if (a[i] < left[i - 1]) {
                    left[i] = a[i];
                } else {
                    left[i] = left[i - 1];
                }
            }
        }

        for (int i = 0; i < n - 1; i++) {
            long long suffix;

            if (i == 0) {
                suffix = a[i + 1];
            } else {
                if (left[i - 1] < a[i + 1]) {
                    suffix = left[i - 1];
                } else {
                    suffix = a[i + 1];
                }
            }

            long long total = a[i] + suffix;
            if (total < min_cost) {
                min_cost = total;
            }
        }

        cout << min_cost << endl;
    }


    return 0;
}
