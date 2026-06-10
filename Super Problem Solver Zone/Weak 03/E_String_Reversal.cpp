#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    string r = s;
    reverse(r.begin(), r.end());

    unordered_map<char, queue<int>> postion;
    for (int i = 0; i < n; i++) {
        postion[s[i]].push(i);
    }

    vector<int> target;
    for (int i = 0; i < n; i++) {
        char c = r[i];
        int index = postion[c].front();
        postion[c].pop();
        target.push_back(index);
    }

    pbds<int> p;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += p.size() - p.order_of_key(target[i]);
        p.insert(target[i]);
    }

    cout << ans << endl;
    return 0;
}
