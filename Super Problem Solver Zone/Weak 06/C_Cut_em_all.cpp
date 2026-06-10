#include <bits/stdc++.h>
using namespace std;

vector<int> tree[100005];
int cutEdges = 0;

int dfs(int node, int parent) {
    int size = 1;
    for (int child : tree[node]) {
        if (child != parent) {
            int childSize = dfs(child, node);
            if (childSize % 2 == 0) {
                cutEdges++;
            } else {
                size += childSize;
            }
        }
    }
    return size;
}

int main() {
    int n;
    cin >> n;
    if (n % 2 == 1) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1, 0);
    cout << cutEdges << endl;
    return 0;
}
