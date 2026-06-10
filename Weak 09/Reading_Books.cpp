#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<long long> t(n);
    long long total_time = 0;
    long long max_time = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];

        total_time += t[i];

        if (t[i] > max_time)
        {
            max_time = t[i];
        }
    }

    long long result;

    if (total_time > 2 * max_time)
    {
        result = total_time;
    }
    else
    {
        result = 2 * max_time;
    }

    cout << result << endl;

    return 0;
}
