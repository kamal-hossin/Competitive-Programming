#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 9;
long long a[maxN], t[maxN * 4], lazy[maxN * 4];

void push(int n, int b, int e) {
    if (lazy[n] == 0) {
        return;
    }
    t[n] += ((e - b + 1) * lazy[n]);
    if (b != e) {
        int l = n * 2, r = n * 2 + 1;
        lazy[l] += lazy[n];
        lazy[r] += lazy[n];
    }
    lazy[n] = 0;
}

void build(int n, int b, int e) {
    if (b == e) {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) / 2;
    build(n * 2, b, mid);
    build(n * 2 + 1, mid + 1, e);
    t[n] = t[n * 2] + t[n * 2 + 1];
}

void update(int n, int b, int e, int i, int j, long long v) {
    push(n, b, e);
    if (e < i || j < b) {
        return;
    }
    if (b >= i && e <= j) {
        lazy[n] += v;
        push(n, b, e);
        return;
    }
    int mid = (b + e) / 2;
    update(n * 2, b, mid, i, j, v);
    update(n * 2 + 1, mid + 1, e, i, j, v);
    t[n] = t[n * 2] + t[n * 2 + 1];
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
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
    }
    build(1, 1, n);

    while (m--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r;
            long long v;
            cin >> l >> r >> v;
            l++;
            update(1, 1, n, l, r, v);
        } else {
            int i;
            cin >> i;
            i++;
            cout << query(1, 1, n, i) << "\n";
        }
    }
    return 0;
}
