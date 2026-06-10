#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    int x, y;

    cin >> n >> m;
    cin >> x >> y;

    int totalTreats = (n * x) + (m * y);

    cout << totalTreats << endl;

    return 0;
}
