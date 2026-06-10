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
        string s;
        cin >> s;

        int L = 0, R = 0, U = 0, D = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'L')
            {
                L++;
            }
            else if (s[i] == 'R')
            {
                R++;
            }
            else if (s[i] == 'U')
            {
                U++;
            }
            else if (s[i] == 'D')
            {
                D++;
            }
        }

        int lr = min(L, R);
        int ud = min(U, D);

        if (lr == 0 && ud == 0)
        {
            cout << 0 << "\n\n";
        }
        else if (lr == 0)
        {
            cout << 2 << "\n";
            cout << "UD\n";
        }
        else if (ud == 0)
        {
            cout << 2 << "\n";
            cout << "LR\n";
        }
        else
        {
            cout << 2 * (lr + ud) << "\n";
            for (int i = 0; i < lr; i++)
            {
                cout << 'L';
            }
            for (int i = 0; i < ud; i++)
            {
                cout << 'U';
            }
            for (int i = 0; i < lr; i++)
            {
                cout << 'R';
            }
            for (int i = 0; i < ud; i++)
            {
                cout << 'D';
            }
            cout << "\n";
        }
    }

    return 0;
}
