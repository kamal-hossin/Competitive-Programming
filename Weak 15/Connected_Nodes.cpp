#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];

int main()
{
    int n,e;
    cin >> n >> e;

    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);

    }

    int q;
    cin >> q;
    while(q--)
    {
        int node;
        cin >> node;
        vector<int> connected;
        for (int child : adj_list[node]) {
            connected.push_back(child);
        }

        if (connected.empty()) {
            cout << "-1";
        } else {
            sort(connected.begin(), connected.end(), greater<int>());
            for (int c : connected) {
                cout << c << " ";
            }
        }
        cout << endl;
    }

   return 0;
}
