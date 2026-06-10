#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        if (N == 1)
        {
            cout << -1 << endl;
        }
        else if (N % 2 == 0)
        {
            for (int i = 0; i < N / 2; ++i)
            {
                cout << "3 -3 ";
            }
            cout << endl;
        }
        else
        {
            cout << "1 2 -3 ";
            for (int i = 0; i < (N - 3) / 2; ++i)
            {
                cout << "3 -3 ";
            }
            cout << endl;
        }
    }

    return 0;
}
