#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    priority_queue<int, vector<int>, greater<int>> minHeap;
    unordered_map<int, int> freq;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            minHeap.push(x);
            freq[x]++;
        } else if (type == 2) {
            if (minHeap.empty()) {
                cout << "empty\n";
            } else {
                while (!minHeap.empty() && freq[minHeap.top()] == 0) {
                    minHeap.pop();
                }
                if (minHeap.empty()) {
                    cout << "empty\n";
                } else {
                    int min = minHeap.top();
                    cout << min << "\n";
                    freq[min] = 0;
                    minHeap.pop();
                }
            }
        }
    }

   return 0;
}