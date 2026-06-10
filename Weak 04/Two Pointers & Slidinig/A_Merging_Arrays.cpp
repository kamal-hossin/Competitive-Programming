#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0;

    vector<int> result;

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            result.push_back(a[i]);
            i++;
        }
        else
        {
            result.push_back(b[j]);
            j++;
        }
    }

    while (i < n)
    {
        result.push_back(a[i]);
        i++;
    }

    while (j < m)
    {
        result.push_back(b[j]);
        j++;
    }

    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}