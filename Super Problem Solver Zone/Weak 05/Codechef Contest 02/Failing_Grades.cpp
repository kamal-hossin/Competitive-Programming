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
        int total = 0;
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            total += x;
            if (!ok)
            {
                double avg = (double)total / (i + 1);
                if (avg < 40.0)
                {
                    ok = true;
                }
            }
        }
        if (ok)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }

    return 0;
}
