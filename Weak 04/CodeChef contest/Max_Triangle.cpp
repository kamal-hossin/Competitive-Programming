#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        long long N;
        cin >> N;

        long long a = N, b = N - 1, c = N - 2;

        if (b + c > a) {
            cout << (a + b + c) << endl;
        } else {
            
            cout << -1 << endl;
        }
    }


    return 0;
}


