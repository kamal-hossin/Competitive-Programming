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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int result = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                result += (a[i] - b[i]);
            }
        }

        cout << result + 1 << endl;
    }
    return 0;
}
