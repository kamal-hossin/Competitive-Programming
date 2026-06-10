#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << 1 << " ";
        for (int i = 2; i <= n; i++)
            cout << (i - 2) % 3 + 1 << " ";
        cout << endl;
    }

    return 0;
}
