#include<bits/stdc++.h>
using namespace std;


bool check(string s, int K) {
    int count = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            count++;
            if (count >= K) return true;
        } else {
            count = 1;
        }
    }
    return false;
}

bool canMakeGood(string s, int K) {
    if (!check(s, K)) return true;
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j <= s.size(); j++) {
            string temp = s;
            reverse(temp.begin() + i, temp.begin() + j);
            if (!check(temp, K)) return true;
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        string S;
        cin >> N >> K >> S;

        if (canMakeGood(S, K)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
