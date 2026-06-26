#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int a, b, c;
    Edge(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int INF = INT_MAX;  
vector<int> dis;

bool bellmanFord(int n, vector<Edge>& edge_list, int source) {
    dis.assign(n + 1, INF);
    dis[source] = 0;

    
    for (int i = 1; i <= n - 1; i++) {
        bool updated = false;
        for (auto ed : edge_list) {
            int a = ed.a, b = ed.b, c = ed.c;
            if (dis[a] != INF && dis[a] + c < dis[b]) {
                dis[b] = dis[a] + c;
                updated = true;
            }
        }
        if (!updated) break;  
    }

    for (auto ed : edge_list) {
        int a = ed.a, b = ed.b, c = ed.c;
        if (dis[a] != INF && dis[a] + c < dis[b]) {
            return false; 
        }
    }
    return true;
}

int main() {
    int n, e;
    cin >> n >> e;
    vector<Edge> edge_list;

    for (int i = 0; i < e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    int source;
    cin >> source;

    if (!bellmanFord(n, edge_list, source)) {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    int t;
    cin >> t;
    while (t--) {
        int dest;
        cin >> dest;
        if (dis[dest] == INF) {
            cout << "Not Possible" << endl;
        } else {
            cout << dis[dest] << endl;
        }
    }

    return 0;
}
