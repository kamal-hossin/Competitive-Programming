#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,coustomer=1;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
        int type, money;
        cin >> type;
        if (type == 1)
        {
            cin >> money;
            s.insert({coustomer, money});
            ml.insert({money, -coustomer});
            coustomer++;
        }
        else if(type==2){
            int pos=s.begin()->first,money=s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money,-pos});

        }
        else{
            int pos=-ml.rbegin()->second,money=ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,money});
        }
    }
    for(auto value : ans){
        cout << value<<" " ;
    }
    cout << endl;

    return 0;
}
