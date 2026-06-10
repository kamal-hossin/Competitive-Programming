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
        int n;
        string a, b, c;
        cin >> n >> a >> b >> c;

        bool lowercase = false;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == b[i] && a[i] != c[i]) || (a[i] != c[i] && b[i] != c[i]))
            {
                lowercase = true;
                break;
            }
        }

        if (lowercase)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
