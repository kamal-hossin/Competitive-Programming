#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e7 + 1;
vector<bool> is_prime(MAX, true);
vector<int> primes;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j < MAX; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i < MAX; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int res = 0;
        for (int i = 0; i < primes.size(); i++)
        {
            if (primes[i] > n)
                break;
            res += n / primes[i];
        }
        cout << res << '\n';
    }

    return 0;
}
