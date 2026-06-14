#include <bits/stdc++.h>
using namespace std;

bool cmp (pair<string, int> &p1, pair<string, int> &p2) {
    if (p1.first != p2.first) {
        return p1.first < p2.first;
    } else {
        return p1.second > p2.second;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i].first >> A[i].second;
    }

    sort(A.begin(), A.end(), cmp);

    for (pair<string, int> p : A) {
        cout << p.first << " " << p.second << endl;
    }

   return 0;
}
