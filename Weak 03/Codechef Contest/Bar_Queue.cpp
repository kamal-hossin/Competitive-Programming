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
        string S;
        cin >> N >> S;

        int boys = 0, girls = 0, entered = 0;

        for (int i = 0; i < N; ++i)
        {
            if (S[i] == 'B')
                boys++;
            else if (S[i] == 'G')
                girls++;

            entered++;

            if (girls == 0 && boys > 0)
            {
                break;
            }

            if (boys > 2 * girls)
            {
                break;
            }
        }

        cout << entered << endl;
    }

    return 0;
}
