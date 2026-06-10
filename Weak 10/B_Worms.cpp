#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> prefix(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) {
            prefix[i] = a[i];
        } else {
            prefix[i] = prefix[i - 1] + a[i];
        }
    }

    int m;
    cin >> m;
    vector<int> queries(m);
    for (int i = 0; i < m; i++) {
        cin >> queries[i];
    }

    for (int i = 0; i < m; i++) {
        int q = queries[i];
        int left = 0;
        int right = n - 1;
        int ans = n;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (prefix[mid] >= q) {
                ans = mid + 1;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << ans << endl;
    }


    return 0;
}


