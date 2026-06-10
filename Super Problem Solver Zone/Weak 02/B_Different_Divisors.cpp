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
        int d;
        cin >> d;

        int p1 = d + 1;
        while (true)
        {
            bool isPrime = true;
            for (int i = 2; i * i <= p1; i++)
            {
                if (p1 % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
            {
                break;
            }
            p1++;
        }

        int p2 = p1 + d;
        while (true)
        {
            bool isPrime = true;
            for (int i = 2; i * i <= p2; i++)
            {
                if (p2 % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
            {
                break;
            }
            p2++;
        }

        cout << p1 * p2 << endl;
    }

    return 0;
}
