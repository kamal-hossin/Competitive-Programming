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
        string s;
        cin >> n >> k >> s;

        int count0 = 0, count1 = 0;
        for (char c : s)
        {
            if (c == '0')
                count0++;
            else
                count1++;
        }

        int max_good_pairs = n / 2;
        if (k > max_good_pairs)
        {
            cout << "NO" << endl;
            continue;
        }
        if ((max_good_pairs - k) % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int max_mismatch_pairs = min(count0, count1);
        if ((max_good_pairs - k) > max_mismatch_pairs)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }

    return 0;
}
