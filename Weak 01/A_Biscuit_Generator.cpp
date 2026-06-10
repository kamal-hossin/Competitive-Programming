#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, t;
    cin >> a >> b >> t;
    int count = 0;
    for (int i = a; i <= t + 0.5; i += a)
    {
        count += b;
    }
    cout << count << endl;

    return 0;
}
