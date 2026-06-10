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

        int cost;
        if (n == 1)
        {
            cost = 200;
        }
        else
        {
            cost = 100 * n;
        }

        cout << cost << endl;
    }

    return 0;
}
