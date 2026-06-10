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
        long long N, M, A, B;
        cin >> N >> M >> A >> B;

        long long d = A - B;
        long long num = M - N * B;

        if (d == 0)
        {
            if (M == N * A)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            if (num % d != 0)
            {
                cout << "No" << endl;
            }
            else
            {
                long long x = num / d;
                if (x >= 0 && x <= N)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
        }
    }

    return 0;
}
