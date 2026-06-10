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
        int n;
        string S, T;
        cin >> n >> S >> T;

        bool ok = true;
        int s_one = 0;

        for (int i = 0; i < n; ++i)
        {
            if (T[i] == '1' && S[i] != '1')
            {
                ok = false;
            }
            if (S[i] == '1')
                s_one++;
        }
        if (!ok || (s_one - count(T.begin(), T.end(), '1')) % 2 != 0)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }

    return 0;
}
