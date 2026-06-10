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
        string p, s;
        cin >> p >> s;

        int i = 0, j = 0;
        bool x = true;

        while (i < p.size() && j < s.size())
        {
            if (p[i] != s[j])
            {
                x = false;
                break;
            }

            j++;

            if (j < s.size() && s[j] == p[i])
            {
                j++;
            }

            i++;
        }
        if (x && i == p.size() && j == s.size())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
