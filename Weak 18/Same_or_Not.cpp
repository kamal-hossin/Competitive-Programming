#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    stack<int> s;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }
    int flag = 1;

    while (!s.empty() && !q.empty())
    {
        if (s.top() != q.front())
        {
            flag = 0;
            break;
        }
        s.pop();
        q.pop();
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}