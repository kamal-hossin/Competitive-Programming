#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int gap = abs(a - b);
        if (gap % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << " YES" << endl;
        }
    }

    return 0;
}