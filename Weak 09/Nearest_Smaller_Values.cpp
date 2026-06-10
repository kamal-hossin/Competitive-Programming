#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<int> result(n + 1);
    stack<int> st;

    for (int i = 1; i <= n; i++)
    {
        while (!st.empty() && a[st.top()] >= a[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            result[i] = 0;
        }
        else
        {
            result[i] = st.top();
        }

        st.push(i);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}
