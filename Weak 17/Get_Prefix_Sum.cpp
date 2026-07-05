#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long> prefix(n);
    prefix[0] = v[0];
    for (int i = 0; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << prefix[i] << " ";
    }
    cout << endl;

    return 0;
}