#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        vector<long long> x(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }
        
        long long time = b;
        for (int i = 0; i < n; ++i) {
            time += min(x[i], a - 1);
        }
        cout << time << endl;
    }

    return 0;
}

