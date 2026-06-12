#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while (t-- && cin >> n)
    {

        int a = sqrt(n);
        if (a * a == n)
            cout << 0 << " " << a << endl;
        else
            cout << "-1\n";
    }

    return 0;
}
