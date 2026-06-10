#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> adj[100001];
int color[100001];
vector<int> parent(100001); 

bool isGood(int N) {
    vector<int> color_count(N + 1, 0);
    
    for (int i = 1; i <= N; i++) {
        color_count[color[i]]++;
    }
    
    for (int i = 1; i <= N; i++) {
        if (color_count[i] == 1) {
            return false;
        }
    }


    for (int i = 2; i <= N; i++) {
        int u = i;
        while (u != 1) {
            int p = parent[u];
            if (color[u] != color[p]) {
                return false;
            }
            u = p;
        }
    }
    
    return true;
}

void assignColors(int N) {
    set<int> used_colors;
    int color_index = 1;
    
    for (int i = 1; i <= N; i++) {
        used_colors.insert(color[i]);
    }
    
    for (int i = 1; i <= N; i++) {
        if (used_colors.find(color[i]) == used_colors.end()) {
            color[i] = color_index++;
        }
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        
        for (int i = 2; i <= N; i++) {
            cin >> parent[i];
            adj[parent[i]].push_back(i);
        }

        vector<int> result;
        for (int i = 1; i < N; i++) {
            if (isGood(i + 1)) {
                result.push_back(1);
            } else {
                result.push_back(0);
            }
        }
        
        for (int i = 0; i < result.size(); i++) {
            cout << result[i];
        }
        cout << endl;
        
        if (result[N - 2] == 1) {
            assignColors(N);
            for (int i = 1; i <= N; i++) {
                cout << color[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
