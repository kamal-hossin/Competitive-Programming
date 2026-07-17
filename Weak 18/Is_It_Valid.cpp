#include <bits/stdc++.h>
using namespace std;

bool isEliminate(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (st.empty())
        {
            st.push(c);
        }
        else if (c == '0' && st.top() == '1')
        {
            st.pop();
        }
        else if (c == '1' && st.top() == '0')
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    return st.empty();
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        bool eliminate = isEliminate(s);
        if (isEliminate(s))
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
