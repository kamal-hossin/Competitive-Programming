#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];


int main()
{
    int n,e;
    cin >> n >> e;

    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }
    memset(vis,false,sizeof(vis));

    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        bool flag = false;

        if (a == b) {
            flag = true;
        }

        for (int child : adj_list[a]) {
            if (child == b) {
                flag = true; 
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

   return 0;
}
