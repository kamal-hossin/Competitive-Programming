#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, n;
    cin >> x >> n;

    set<int> lights;
    multiset<int> segments;

    lights.insert(0);
    lights.insert(x);
    segments.insert(x);

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;

        auto upper = lights.upper_bound(p);
        auto lower = prev(upper);

        segments.erase(segments.find(*upper - *lower));

        segments.insert(p - *lower);
        segments.insert(*upper - p);

        lights.insert(p);

        cout << *segments.rbegin() << " ";
    }

    return 0;
}
