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
        cin >> n;
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int color;
            cin >> color;
            freq[color]++;
        }
        int max_freq = 0;
        for (int i = 1; i <= n; i++)
        {
            if (freq[i] > max_freq)
                max_freq = freq[i];
        }
        int cost1 = n - freq[1];
        int cost2 = 1 + (n - max_freq);
        cout << min(cost1, cost2) << endl;
    }

    return 0;
}
