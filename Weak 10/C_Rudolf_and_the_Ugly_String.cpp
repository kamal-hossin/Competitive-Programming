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
        string s;
        cin >> n >> s;

        int cnt = 0;
        for (int i = 0; i <= n - 3; ++i)
        {
            if (s.substr(i, 3) == "pie" || s.substr(i, 3) == "map")
            {
                cnt++;
                i += 2;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
