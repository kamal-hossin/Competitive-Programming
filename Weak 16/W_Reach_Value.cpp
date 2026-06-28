#include<bits/stdc++.h>
using namespace std;


bool canReach(long long current, long long target) {
    if (current > target) return false;
    if (current == target) return true;
    return canReach(current * 10, target) || canReach(current * 20, target);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (canReach(1, n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}