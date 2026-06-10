#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, x;
    cin >> n>> x; 
    vector<int> res;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num != x) { 
            res.push_back(num); 
        }
    }

    if (!res.empty()) {
        for (int i = 0; i < res.size(); i++) {
            if (i > 0) {
            cout << " "; 
            }
            cout << res[i];
        }
    }
    
     cout << endl; 
    return 0;
}
