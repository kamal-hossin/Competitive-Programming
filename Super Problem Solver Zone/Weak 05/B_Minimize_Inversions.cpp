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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<pair<int, int>> pairs(n);
        for (int i = 0; i < n; i++)
        {
            pairs[i] = {a[i], b[i]};
        }

        sort(pairs.begin(), pairs.end());

        for (int i = 0; i < n; i++)
        {
            cout << pairs[i].first << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << pairs[i].second << " ";
        }
        cout << endl;
    }

    return 0;
}
