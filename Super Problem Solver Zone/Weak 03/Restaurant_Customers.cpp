#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> d;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        d.push_back({a, 1});
        d.push_back({b, -1});
    }

    sort(d.begin(), d.end());

    int current = 0, customer = 0;

    for (auto [x, y] : d) {
        current += y;
        customer = max(customer, current);
    }

    cout << customer << endl;;

    return 0;
}
