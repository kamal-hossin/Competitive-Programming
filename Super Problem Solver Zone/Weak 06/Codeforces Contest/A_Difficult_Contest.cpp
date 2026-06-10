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
        string t_chars, other_chars;
        for (char c : s)
        {
            if (c == 'T')
            {
                t_chars += c;
            }
            else
            {
                other_chars += c;
            }
        }
        cout << t_chars << other_chars << "\n";
    }

    return 0;
}
