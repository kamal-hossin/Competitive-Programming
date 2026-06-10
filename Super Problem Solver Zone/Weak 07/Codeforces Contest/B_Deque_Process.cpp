#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        
        deque<int> dq(p.begin(), p.end());
        string s;
        int last = -1;
        for (int i = 0; i < n; ++i) {
            if (dq.front() < dq.back()) {
                if (last == -1 || dq.front() > last) {
                    s += 'L';
                    last = dq.front();
                    dq.pop_front();
                } else {
                    s += 'R';
                    last = dq.back();
                    dq.pop_back();
                }
            } else {
                if (last == -1 || dq.back() > last) {
                    s += 'R';
                    last = dq.back();
                    dq.pop_back();
                } else {
                    s += 'L';
                    last = dq.front();
                    dq.pop_front();
                }
            }
        }
        cout << s << '\n';
    }
    return 0;
}
