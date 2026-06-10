#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> songs(n);
    for (int i = 0; i < n; i++) {
        cin >> songs[i];
    }

    set<int> seen;
    int left = 0, right = 0;
    int max_length = 0;

    while (right < n) {
        while (seen.find(songs[right]) != seen.end()) {
            seen.erase(songs[left]);
            left++;
        }

        seen.insert(songs[right]);
        max_length = max(max_length, right - left + 1);
        right++;
    }

    cout << max_length << endl;

    return 0;
}
