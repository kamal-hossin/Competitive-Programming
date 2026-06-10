#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, m, n;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            for (char c = 'a'; c < 'a' + n; c++)
            {
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}
