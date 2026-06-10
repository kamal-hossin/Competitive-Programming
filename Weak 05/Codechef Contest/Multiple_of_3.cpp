#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    int lower = (N / 3) * 3;
    int upper = lower + 3;

    if (abs(N - lower) <= abs(N - upper))
    {
        cout << lower << endl;
    }
    else
    {
        cout << upper << endl;
    }

    return 0;
}
