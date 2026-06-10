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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int total_room = 0;
        for (int i = 0; i < n; i++)
        {
            total_room += (a[i] + 1) / 2;
        }
        cout << total_room << endl;
    }

    return 0;
}