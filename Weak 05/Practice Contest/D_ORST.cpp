#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < m; i++) { 
            cin >> b[i];
        }

        int maxb = *max_element(b.begin(), b.end());

        sort(a.begin() + (n - maxb), a.end());

        for(int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
