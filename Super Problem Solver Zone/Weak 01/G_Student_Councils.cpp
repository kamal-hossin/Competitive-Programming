#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, s, z;
    cin >> t;
    while (t--)
    {
        s = z = 0;
        cin >> n;
        while (n--)
        {
            cin >> a;
            if (a == 0)
                z += 1;
            s += a;
        }
        cout << (s + z == 0) + z << '\n';
    }
}