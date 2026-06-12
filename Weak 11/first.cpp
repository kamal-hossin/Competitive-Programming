#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, pair<int, int>> idx;
    for (int i = 0; i < n; i++)
    {
        if (idx.find(a[i]) == idx.end())
        {
            idx[a[i]] = {i + 1, i + 1};
        }
        else
        {
            idx[a[i]].second = i + 1;
        }
    }
    for (auto &ans : idx)
    {
        cout << ans.first << " " << ans.second.first << " " << ans.second.second << endl;
    }

    return 0;
}
