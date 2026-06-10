#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;

        int left = 0, right = n - 1;
        int ans = -1;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (prices[mid] <= m)
            {
                ans = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        cout << (ans + 1) << endl;
    }

    return 0;
}