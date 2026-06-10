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
        string a, b, c;
        cin >> n >> a;
        cin >> m >> b;
        cin >> c;
        string left = "", right = "";
        for (int i = 0; i < m; i++)
        {
            if (c[i] == 'V')
            {
                left = b[i] + left;
            }
            else
            {
                right += b[i];
            }
        }
        cout << left + a + right << endl;
    }

    return 0;
}
