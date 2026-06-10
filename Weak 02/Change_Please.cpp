#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int change = 100 - x;
        int maxammount=(change / 10) * 10;
        cout << maxammount << endl;
    }

    return 0;
}