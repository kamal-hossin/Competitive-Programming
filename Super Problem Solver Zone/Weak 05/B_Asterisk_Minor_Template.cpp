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
        string a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "YES\n"
                 << a << "\n";
            continue;
        }

        if (a[0] == b[0])
        {
            cout << "YES\n"
                 << a[0] << "*\n";
            continue;
        }

        if (a.back() == b.back())
        {
            cout << "YES\n*" << a.back() << "\n";
            continue;
        }

        bool found = false;
        for (int i = 0; i < a.size() - 1; i++)
        {
            string sub = a.substr(i, 2);
            bool match = false;
            for (int j = 0; j < b.size() - 1; j++)
            {
                if (b[j] == sub[0] && b[j + 1] == sub[1])
                {
                    match = true;
                    break;
                }
            }
            if (match)
            {
                cout << "YES\n*" << sub << "*\n";
                found = true;
                break;
            }
        }

        if (!found)
            cout << "NO\n";
    }

    return 0;
}
