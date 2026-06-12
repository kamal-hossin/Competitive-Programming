#include <bits/stdc++.h>
using namespace std;
int t, n;
char c;
string s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while (t--)
    {
        int ans = 0, k = 0;
        cin >> n >> c >> s;
        s += s;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'g')
                k = i;
            if (s[i] == c)
                ans = max(ans, k - i);
        }
        cout << ans << endl;
    }

    return 0;
}
