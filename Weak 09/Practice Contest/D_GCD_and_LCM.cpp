#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;

        if (k == 0) {
            cout << x + y << endl;
        } else {
            int Gcd = __gcd(x, y);
            cout << 2 * Gcd << endl;
        }
    }


    return 0;
}


