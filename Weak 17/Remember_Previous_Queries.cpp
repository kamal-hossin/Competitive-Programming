#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> ll;
    int q;
    cin >> q;
    int count = 0;
    
    while (q--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            ll.push_front(v);
            count++;
        } else if (x == 1) {
            ll.push_back(v);
            count++;
        } else if (x == 2) {
            auto it = ll.begin();
            for (int i = 0; i < v; i++) {
                it++;
            }
            if (v < count) {
                ll.erase(it);
                count--;
            }
        }
        cout << "L -> ";
        for (auto it : ll) {
            cout << it << " ";
        }
        cout << endl;
        cout << "R -> ";
        auto it = ll.end();
        it--;
        while (it != ll.end()) {
             cout << *it << " ";
             it--;
        }
        cout << endl;
    }
    
    

   return 0;
}