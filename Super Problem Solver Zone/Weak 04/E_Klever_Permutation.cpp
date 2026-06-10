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
        int n, k;
        cin >> n >> k;
        vector<int> p(n);
        int low = 1;
        int high = n;

        for (int i = 0; i < k; i++)
        {
            if ((i + 1) % 2 != 0)
            {
                for (int j = i; j < n; j += k)
                {
                    p[j] = low;
                    low++;
                }
            }
            else
            {
                for (int j = i; j < n; j += k)
                {
                    p[j] = high;
                    high--;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << p[i];
            if (i != n - 1)
            {
                cout << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}
