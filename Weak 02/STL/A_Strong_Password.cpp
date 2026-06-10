#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int calculateTime(const string &s) {
    if (s.empty()) return 0;
    int total = 2;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i-1]) {
            total += 1;
        } else {
            total += 2;
        }
    }
    return total;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int max_time = -1;
        string best_str;
        
        for (int i = 0; i <= s.size(); ++i) {
            for (char c = 'a'; c <= 'z'; ++c) {
                string temp = s.substr(0, i) + c + s.substr(i);
                int current_time = calculateTime(temp);
                if (current_time > max_time) {
                    max_time = current_time;
                    best_str = temp;
                }
            }
        }
        
        cout << best_str << endl;
    }
    return 0;
}