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
        string row1, row2;
        cin >> row1 >> row2;

        bool valid = true;
        for (int i = 0; i < n; i++)
        {
            char c1 = row1[i];
            char c2 = row2[i];
            if (c1 != c2)
            {
                if ((c1 == 'G' && c2 == 'B') || (c1 == 'B' && c2 == 'G'))
                {
                    continue;
                }
                else
                {
                    valid = false;
                    break;
                }
            }
        }
        if (valid)
        {
            cout << " YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}