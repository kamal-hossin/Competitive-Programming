#include <bits/stdc++.h>
using namespace std;
int INF = INT_MAX; 
vector<pair<int, int>> adj_list[10005];  
int dis[10005];  

void dijkstra(int src, int n) {
    fill(dis, dis + n + 1, INF);
    dis[src] = 0; 
    
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});  

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dis[u]) continue;

        for (auto &neighbor : adj_list[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            
            if (dis[u] + weight < dis[v]) {
                dis[v] = dis[u] + weight;
                pq.push({dis[v], v});
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

   
    for (int i = 0; i < e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
    }

    int q;
    cin >> q;  

    while (q--) {
        int s, d;
        cin >> s >> d;

        
        dijkstra(s, n);

        if (dis[d] == INF) {
            cout << -1 << endl;  
        } else {
            cout << dis[d] << endl;
        }
    }

    return 0;
}
