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
        int n, k, sum = 0, i;
        string a;
        cin >> n >> k >> a;

        char c = 'B';
        for (i = 0; i < n; i++)
        {
            sum += (a[i] == 'B');
        }

        i = 0;
        while (sum != k)
        {
            if (sum < k && a[i] == 'A')
            {
                sum++;
                c = 'B';
            }
            if (sum > k && a[i] == 'B')
            {
                sum--;
                c = 'A';
            }
            i++;
        }

        if (i)
        {
            cout << 1 << "\n"
                 << i << " " << c << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }

    return 0;
}
