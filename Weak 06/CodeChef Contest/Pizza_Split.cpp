#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    int k = 1;
    while ((k * N) % 2 != 0)
    {
        k++;
    }

    cout << k << endl;
    return 0;

    return 0;
}
