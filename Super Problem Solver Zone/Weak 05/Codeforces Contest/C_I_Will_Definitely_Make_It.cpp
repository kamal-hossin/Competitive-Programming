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
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        int max_h = h[0];
        for (int i = 1; i < n; i++)
        {
            if (h[i] > max_h)
            {
                max_h = h[i];
            }
        }
        if (h[k - 1] == max_h)
        {
            cout << "YES" << endl;
            continue;
        }
        bool possible = false;
        for (int i = 0; i < n; i++)
        {
            if (h[i] == max_h)
            {
                if (max_h <= 2 * h[k - 1])
                {
                    possible = true;
                    break;
                }
            }
        }
        if (possible)
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
