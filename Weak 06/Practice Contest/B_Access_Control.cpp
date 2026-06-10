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
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;

        int swipe = 0;
        bool valid = true;

        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (c == '1')
            {
                swipe = x;
            }
            else
            {
                if (swipe == 0)
                {
                    valid = false;
                    break;
                }
                swipe--;
            }
        }

        if (valid)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
