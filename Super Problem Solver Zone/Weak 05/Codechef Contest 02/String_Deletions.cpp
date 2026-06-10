#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

struct Run {
    char ch;
    int len;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n <= 2) {
            cout << n << "\n";
            continue;
        }

        vector<Run> runs;
        if (n > 0) {
            runs.push_back({s[0], 1});
            for (int i = 1; i < n; ++i) {
                if (s[i] == runs.back().ch) {
                    runs.back().len++;
                } else {
                    runs.push_back({s[i], 1});
                }
            }
        }

        vector<Run> st;
        for (int i = 0; i < (int)runs.size(); ++i) {
            Run run = runs[i];
            if ((int)st.size() >= 2 && run.ch == st[(int)st.size() - 2].ch) {
                st[(int)st.size() - 2].len += run.len;
                st.pop_back();
            } else {
                st.push_back(run);
            }
        }

        long long final_length = 0;
        for (int i = 0; i < (int)st.size(); ++i) {
            final_length += st[i].len;
        }
        cout << final_length << "\n";
    }

    return 0;
}
