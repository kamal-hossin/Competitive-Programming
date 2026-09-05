#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;
        int pos = s.find(x);
        while (pos != -1)
        {
            s.replace(pos, x.size(), "#");
            pos = s.find(x, pos + 1);
        }
        cout << s << endl;
    }

    return 0;
}