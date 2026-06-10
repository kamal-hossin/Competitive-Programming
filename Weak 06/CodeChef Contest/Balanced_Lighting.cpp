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

        vector<int> c(n);
        int red = 0, blue = 0, undecided = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> c[i];
            if (c[i] == 1)
                red++;
            else if (c[i] == 2)
            {
                blue++;
            }
            else
            {
                undecided++;
            }
        }

        int diff = abs(red - blue);

        if (undecided >= diff && (undecided - diff) % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
