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
        int n, W;
        cin >> n >> W;

        map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            int w;
            cin >> w;
            freq[w]++;
        }

        int height = 0;
        int remaining = n;

        while (remaining > 0)
        {
            int space = W;

            for (auto it = freq.rbegin(); it != freq.rend(); ++it)
            {
                int width = it->first;
                int &count = it->second;

                int can_fit = space / width;
                int use = min(can_fit, count);

                space -= use * width;
                count -= use;
                remaining -= use;
            }

            height++;
        }

        cout << height << '\n';
    }

    return 0;
}
