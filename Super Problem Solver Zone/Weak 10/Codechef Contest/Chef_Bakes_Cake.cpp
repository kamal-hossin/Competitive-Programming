#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, X, Y;
    cin >> N >> X >> Y;

    int cake = Y / X;
    int vehicles = (N + cake - 1) / cake;

    cout << vehicles << endl;

    return 0;
}
