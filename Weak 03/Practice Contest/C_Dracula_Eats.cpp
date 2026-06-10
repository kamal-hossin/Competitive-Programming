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
        int count = 0;
        if (n >= 2)
        {
            count = ((n - 2) / 7) + 1;
        }
        cout << count << endl;
    }

    return 0;
}