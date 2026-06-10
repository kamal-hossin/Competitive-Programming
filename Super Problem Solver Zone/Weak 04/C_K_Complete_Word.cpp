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
        cin >> n >> k;
        string s;
        cin >> s;

        int ans = 0;

        for (int i = 0; i < (k + 1) / 2; i++)
        {
            map<char, int> freq;
            int count = 0;
            for (int j = 0; j < n; j += k)
            {
                int pos1 = j + i;
                int pos2 = j + k - 1 - i;
                if (pos1 < n)
                {
                    freq[s[pos1]]++;
                    count++;
                }
                if (pos2 < n && pos2 != pos1)
                {
                    freq[s[pos2]]++;
                    count++;
                }
            }

            int max_freq = 0;
            for (map<char, int>::iterator it = freq.begin(); it != freq.end(); it++)
            {
                if (it->second > max_freq)
                {
                    max_freq = it->second;
                }
            }

            ans += count - max_freq;
        }

        cout << ans << endl;
    }

    return 0;
}
