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
        vector<long long> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if ((2 * sum) % n != 0)
        {
            cout << 0 << endl;
            continue;
        }

        long long target = (2 * sum) / n;
        unordered_map<long long, long long> freq;
        long long count = 0;

        for (int i = 0; i < n; i++)
        {
            long long need = target - a[i];
            if (freq.count(need))
            {
                count += freq[need];
            }
            freq[a[i]]++;
        }

        cout << count << endl;
    }

    return 0;
}
