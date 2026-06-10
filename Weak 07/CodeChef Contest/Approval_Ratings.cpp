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
        vector<int> a(5);
        int sum = 0;
        for (int i = 0; i < 5; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum >= 35)
        {
            cout << 0 << endl;
            continue;
        }
        sort(a.begin(), a.end());

        int bribes = 0;

        for (int i = 0; i < 5 && sum < 35; i++)
        {
            sum += (10 - a[i]);
            bribes++;
        }

        cout << bribes * 100 << endl;
    }

    return 0;
}
