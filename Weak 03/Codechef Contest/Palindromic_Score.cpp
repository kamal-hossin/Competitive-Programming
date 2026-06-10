#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int total1 = Y + Z;
        int odd1 = (Y % 2) + (Z % 2);
        int score1 = total1 - odd1 + (odd1 > 0 ? 1 : 0);

        int total2 = X + Z;
        int odd2 = (X % 2) + (Z % 2);
        int score2 = total2 - odd2 + (odd2 > 0 ? 1 : 0);

        int total3 = X + Y;
        int odd3 = (X % 2) + (Y % 2);
        int score3 = total3 - odd3 + (odd3 > 0 ? 1 : 0);

        int result = min({score1, score2, score3});
        cout << result << '\n';
    }

    return 0;
}
