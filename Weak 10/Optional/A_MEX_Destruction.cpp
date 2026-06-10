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

        vector<int> a(n);
        bool all_zero = true;
        bool has_zero = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != 0) {
                all_zero = false;
            }
            if (a[i] == 0) {
                has_zero = true;
            }
        }

        if (all_zero) {
            cout << 0 << endl;
            continue;
        }

        unordered_set<int> elements;
        for (int i = 0; i < n; i++) {
            elements.insert(a[i]);
        }

        int mex_all = 0;
        while (elements.count(mex_all)) {
            mex_all++;
        }

        if (mex_all == 0) {
            cout << 1 << endl;
            continue;
        }

        if (!has_zero) {
            cout << 1 << endl;
            continue;
        }

        int zero_blocks = 0;
        for (int i = 0; i < n;) {
            if (a[i] == 0) {
                zero_blocks++;
                while (i < n && a[i] == 0) {
                    i++;
                }
            } else {
                i++;
            }
        }

        if (zero_blocks == 1) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }


    return 0;
}

