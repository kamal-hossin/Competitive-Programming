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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int no_carry = 1;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] > a[no_carry])
            {
                no_carry = i;
            }
        }
        cout << no_carry << endl;
    }

    return 0;
}
