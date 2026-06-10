#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, res = 0;
        cin >> n;
        for (int i = 0; i < n - 3; i++)
        {
            res ^= i;
            cout << i << ' ';
        }
        cout << (1 << 28) << ' ' << (1 << 29) << ' ' << (res ^ (1 << 28) ^ (1 << 29)) << "\n";
    }
}