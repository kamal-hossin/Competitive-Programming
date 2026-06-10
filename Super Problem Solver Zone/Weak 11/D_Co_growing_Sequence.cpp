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
        int len, prev, x;
        cin >> len >> prev;
        cout << "0" << ' ';
        for (int i = 1; i < len; i++)
        {
            cin >> x;
            prev |= x;
            cout << prev - x << " ";
        }
        cout << endl;
    }

    return 0;
}
