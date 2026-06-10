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
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (a[i] == b[j])
            {
                i++;
            }
            j++;
        }
        cout << i << endl;
    }

    return 0;
}
