#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    if (s.length() != t.length())
    {
        cout << "No" << endl;
        return 0;
    }
    set<char> vowel{'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < s.length(); i++)
    {
        if (vowel.count(s[i]) != vowel.count(t[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
