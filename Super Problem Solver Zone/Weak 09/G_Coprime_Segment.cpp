#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    int ans = INT_MAX;
    for (int i = 0; i < n; i++) 
    {
        long long g = 0;
        for (int j = i; j < n; j++) 
        {
            g = __gcd(g, a[j]);
            if (g == 1) 
            {
                ans = min(ans, j - i + 1);
                break;
            }
        }
    }
    if (ans == INT_MAX) 
    {
        cout << -1 << "\n";
    }
    else 
    {
        cout << ans << "\n";
    }
}
