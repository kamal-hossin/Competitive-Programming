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
            cin >> a[i];

        int result = 0;
        for (int i = 0; i < n; i++)
        {
            result = max(result, a[i] - a[0]);
            result = max(result, a[n - 1] - a[i]);
            result = max(result, a[i] - a[(i + 1) % n]);
        }
        cout << result << endl;
    }

    return 0;
}
