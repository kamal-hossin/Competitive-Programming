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
        int x;
        cin >> x;

        set<int> s;
        int temp = x;
        while (temp > 0)
        {
            s.insert(temp % 10);
            temp /= 10;
        }

        for (int y = 0;; y++)
        {
            int z = y;
            bool found = false;

            if (z == 0 && s.count(0))
            {
                found = true;
            }

            while (z > 0)
            {
                int d = z % 10;
                if (s.count(d))
                {
                    found = true;
                    break;
                }
                z /= 10;
            }

            if (found)
            {
                cout << y << endl;
                break;
            }
        }
    }

    return 0;
}
