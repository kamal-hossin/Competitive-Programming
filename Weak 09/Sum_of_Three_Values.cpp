#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; ++i)
    {
        int l = i + 1;
        int r = n - 1;

        while (l < r)
        {
            long long sum = a[i].first + a[l].first + a[r].first;
            if (sum == x)
            {
                vector<int> indices = {a[i].second, a[l].second, a[r].second};
                sort(indices.begin(), indices.end());
                cout << indices[0] << " " << indices[1] << " " << indices[2] << endl;
                return 0;
            }
            else if (sum < x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
