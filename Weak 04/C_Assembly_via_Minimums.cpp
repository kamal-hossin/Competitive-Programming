#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int size = n * (n - 1) / 2;
        vector<int> b(size);

        for (int i = 0; i < size; ++i) {
            cin >> b[i];
        }

        sort(b.begin(), b.end()); 

        
    }

    return 0;
}
