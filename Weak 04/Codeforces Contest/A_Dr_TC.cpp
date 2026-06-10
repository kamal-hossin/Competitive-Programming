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
        int n;
        string s;
        cin >> n >> s;

        int count = 0;

        for (char c : s)
        {
            if (c == '1')
                count++;
        }

        int result = n * count + (n - 2 * count);

        cout << result << endl;
    }

    return 0;
}
