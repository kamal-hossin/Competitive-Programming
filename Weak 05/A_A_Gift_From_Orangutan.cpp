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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        int curr_min = a[0], curr_max = a[0];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            curr_min = min(curr_min, a[i]);
            curr_max = max(curr_max, a[i]);
            sum += curr_max - curr_min;
        }
        cout << sum << endl;
    }

    return 0;
}