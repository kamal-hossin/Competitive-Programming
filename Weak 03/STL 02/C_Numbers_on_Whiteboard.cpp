#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        priority_queue<int> pq;
        for (int i = 1; i <= n; ++i) {
            pq.push(i);
        }
        vector<pair<int, int>> operations;
        while (pq.size() > 1) {
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            operations.emplace_back(a, b);
            int avg = (a + b + 1) / 2; // rounding up
            pq.push(avg);
        }
        cout << pq.top() << "\n";
        for (auto &op : operations) {
            cout << op.first << " " << op.second << "\n";
        }
    }
    return 0;
}