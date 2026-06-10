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
        string ans = "";
        if (N == 1)
        {
            ans = "a";
        }
        else if (N == 2)
        {
            ans = "aa";
        }
        else if (N == 3)
        {
            ans = "aab";
        }
        else
        {
            string base = "abaa";
            for (int i = 0; i < N; i++)
            {
                ans += base[i % 4];
            }
        }
        cout << ans << endl;
    }

    return 0;
}
