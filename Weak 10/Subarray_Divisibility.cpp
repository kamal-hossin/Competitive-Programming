#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<long long, long long> freq;
    long long sum = 0, result = 0;

    freq[0] = 1;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        long long mod = ((sum % n) + n) % n;
        result += freq[mod];
        freq[mod]++;
    }

    cout << result << endl;

    return 0;
}
