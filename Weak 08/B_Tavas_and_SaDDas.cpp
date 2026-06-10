#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n;
    cin >> n;

    int len = n.size();
    int pos = 0;

    for (int i = 1; i < len; i++)
    {
        pos += (1 << i);
    }

    int binary_value = 0;
    for (int i = 0; i < len; i++)
    {
        binary_value <<= 1;
        if (n[i] == '7')
        {
            binary_value += 1;
        }
    }

    pos += binary_value + 1;

    cout << pos << endl;

    return 0;
}
