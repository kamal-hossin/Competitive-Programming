#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long x;
    cin >> n >> x;

    long long sum = 0, count = 0;
    map<long long, int> prefix_count;

    prefix_count[0] = 1;

    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        sum += a;

        if (prefix_count.count(sum - x))
        {
            count += prefix_count[sum - x];
        }

        prefix_count[sum]++;
    }

    cout << count << endl;

    return 0;
}
