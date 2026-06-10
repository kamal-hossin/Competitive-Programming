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
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = n; i >= 1; i -= 2)
            {
                cout << i << " ";
            }
            for (int i = 2; i <= n; i += 2)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
