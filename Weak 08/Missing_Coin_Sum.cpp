#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<long long> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    sort(coins.begin(), coins.end());

    long long small_miss = 1;

    for (int i = 0; i < n; i++)
    {
        if (coins[i] > small_miss)
        {
            break;
        }
        else
        {
            small_miss += coins[i];
        }
    }

    cout << small_miss << endl;

    return 0;
}
