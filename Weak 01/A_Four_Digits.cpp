#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    if (N < 10)
    {
        cout << "000" << N << endl;
    }
    else if (N < 100)
    {
        cout << "00" << N << endl;
    }
    else if (N < 1000)
    {
        cout << "0" << N << endl;
    }
    else
    {
        cout << N << endl;
    }

    return 0;
}
