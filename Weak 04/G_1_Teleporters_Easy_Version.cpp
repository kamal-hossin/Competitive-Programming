#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        long long c;
        cin >> n >> c;
        vector<long long >a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<long long> cost;
        for (int i = 0; i < n; ++i) {
            cost.push_back(a[i] + i + 1);
        }

        sort(cost.begin(), cost.end()); 

        int used = 0; 
        for (long long x : cost) {
            if (c >= x) {
                c -= x;
                used++;
            } else {
                break;
            }
        }

        cout << used << endl;
    }

    return 0;
}
