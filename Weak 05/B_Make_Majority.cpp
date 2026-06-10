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
        cin >> n;
        string s;
        cin >> s;

        int ones=count(s.begin(),s.end(),'1');
        if(ones==0){
            cout << "No" << endl;
        }
        else if(ones==1 && n >1){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}