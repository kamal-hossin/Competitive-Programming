#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N, K, D;
        cin >> N >> K >> D;

        vector<int> T_i(N);
        for (int i = 0; i < N; ++i) cin >> T_i[i];

        set<int> available;
        for (int i = 0; i < N; ++i) available.insert(i); 

        map<int, vector<int>> regrow_map; 

        int plucked = 0;

        for (int day = 1; day <= D; ++day) {
            if (regrow_map.count(day)) {
                for (int idx : regrow_map[day]) {
                    available.insert(idx);
                }
            }

           
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
            for (int idx : available) {
                pq.push({T_i[idx], idx});
            }

            while ((int)available.size() > K && !pq.empty()) {
                int idx = pq.top().second;
                pq.pop();
                available.erase(idx);
                regrow_map[day + T_i[idx]].push_back(idx);
                plucked++;
            }
        }

        cout << plucked << endl;
    }

    return 0;
}


