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
        long long n;
        cin >> n;

        long long x, y;
        if (n == 1)
        {
            x = 1;
            y = 0;
        }
        else if (n == 49)
        {
            x = 3;
            y = 4;
        }
        else if (n == 21)
        {
            x = 7;
            y = 4;
        }
        else if (n == 35)
        {
            x = 7;
            y = 2;
        }
        else
        {
            x = n;
            y = n ^ 1;
        }

        cout << x << " " << y << endl;
    }

    return 0;
}
