#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
long long t[N * 4], lazy[N * 4];

void push(int n, int b, int e) {
    if (lazy[n] != LLONG_MIN) {
        t[n] = lazy[n];
        if (b != e) {
            lazy[n * 2] = lazy[n];
            lazy[n * 2 + 1] = lazy[n];
        }
        lazy[n] = LLONG_MIN;
    }
}

void update(int n, int b, int e, int l, int r, long long v) {
    push(n, b, e);
    if (b > r || e < l) {
        return;
    }
    if (b >= l && e <= r) {
        lazy[n] = v;
        push(n, b, e);
        return;
    }
    int mid = (b + e) / 2;
    update(n * 2, b, mid, l, r, v);
    update(n * 2 + 1, mid + 1, e, l, r, v);
}

long long query(int n, int b, int e, int i) {
    push(n, b, e);
    if (b == e) {
        return t[n];
    }
    int mid = (b + e) / 2;
    if (i <= mid) {
        return query(n * 2, b, mid, i);
    } else {
        return query(n * 2 + 1, mid + 1, e, i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < N * 4; i++) {
        lazy[i] = LLONG_MIN;
    }
    while (m--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r;
            long long v;
            cin >> l >> r >> v;
            update(1, 0, n - 1, l, r - 1, v);
        } else {
            int idx;
            cin >> idx;
            cout << query(1, 0, n - 1, idx) << '\n';
        }
    }
}
