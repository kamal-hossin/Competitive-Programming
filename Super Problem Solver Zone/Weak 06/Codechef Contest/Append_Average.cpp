#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        long long initial_sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            initial_sum += a[i];
        }

        partial_sort(a.begin(), a.begin() + 2, a.end());

        long long m1 = a[0];
        long long m2 = a[1];

        long long appended_sum = 0;
        long long ops_done = 0;
        long long current_partner = m2;

        while (ops_done < k && current_partner > m1) {
            long long new_val = (m1 + current_partner + 1) / 2;
            appended_sum += new_val;
            current_partner = new_val;
            ops_done++;
        }

        if (ops_done < k) {
            appended_sum += (k - ops_done) * m1;
        }

        cout << initial_sum + appended_sum << "\n";
    }

    return 0;
}
