#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> pre(s.begin(), s.end());
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (pre.find(c) == pre.end())
        {
            cout << c << endl;
            return 0;
        }
    }
    cout << "None" << endl;

    return 0;
}