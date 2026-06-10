#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

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

    vector<long long> b(n), c(n);

    ordered_set x;
    for (int i = 0; i < n; i++)
    {
        b[i] = (long long)(x.size()) - x.order_of_key(a[i]);
        x.insert(a[i]);
    }

    ordered_set y;
    for (int i = n - 1; i >= 0; i--)
    {
        c[i] = y.order_of_key(a[i]);
        y.insert(a[i]);
    }

    long long total = 0;
    for (int i = 0; i < n; i++)
    {
        total += b[i] * c[i];
    }

    cout << total << endl;
    return 0;
}
