#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int total = X + Y;
        int min_draw = 0;

        while ((total - 2 * min_draw) % 3 != 0) {
            min_draw++;
        }

        cout << min_draw << endl;
    }

    return 0;
}
