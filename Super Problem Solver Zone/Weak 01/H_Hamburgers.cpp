#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     string recipe;
    cin >> recipe;

    long long nb, ns, nc;
    cin >> nb >> ns >> nc;

    long long pb, ps, pc;
    cin >> pb >> ps >> pc;

    long long r;
    cin >> r;

    long long needB = 0, needS = 0, needC = 0;
    for (char c : recipe) {
        if (c == 'B') {
            needB++;
        } else if (c == 'S') {
            needS++;
        } else if (c == 'C') {
            needC++;
        }
    }

    long long left = 0, right = 1000000000000LL, ans = 0;
    while (left <= right) {
        long long mid = (left + right) / 2;

        long long buyB = 0, buyS = 0, buyC = 0;

        if (needB * mid > nb) {
            buyB = needB * mid - nb;
        }
        if (needS * mid > ns) {
            buyS = needS * mid - ns;
        }
        if (needC * mid > nc) {
            buyC = needC * mid - nc;
        }

        long long cost = buyB * pb + buyS * ps + buyC * pc;

        if (cost <= r) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}

