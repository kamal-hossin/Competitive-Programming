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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int totalcost = 0;
        for (int i = 0; i < n; i++)
        {
            int lowcost = a[i] * x;
            int maxcost = y;
            totalcost += min(lowcost, maxcost);
        }
        cout << totalcost << endl;
    }

    return 0;
}