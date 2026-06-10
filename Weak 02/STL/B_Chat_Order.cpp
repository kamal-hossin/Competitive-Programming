#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    unordered_set<string> seen;   
    list<string> chatlist;        
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        if (seen.find(name) != seen.end()) {
            chatlist.remove(name); 
        }

       
        chatlist.push_front(name);
        seen.insert(name);
    }

    
    for (const string& name : chatlist) {
        cout << name << endl;
    }


    return 0;
}

