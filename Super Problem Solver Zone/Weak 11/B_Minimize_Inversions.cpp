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
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({a[i], b[i]});
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            cout << v[i].first << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v[i].second << " ";
        }
        cout << endl;
    }

    return 0;
}