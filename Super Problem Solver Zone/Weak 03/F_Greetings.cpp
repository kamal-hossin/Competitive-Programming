#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        sort(a.begin(), a.end());
        ordered_set<int> s;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            int bi = a[i].second;
            ans += s.size() - s.order_of_key(bi + 1);
            s.insert(bi);
        }
        cout << ans << endl;
    }
    return 0;
}
