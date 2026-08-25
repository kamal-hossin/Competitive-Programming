#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string newStr = "";

        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                int num = s[i] - '0';
                if (num == 0) {
                    if (!newStr.empty()) {
                        newStr.pop_back();
                    }
                } else {
                    char prevChar = newStr.back();
                    for (int j = 1; j < num; j++) {
                        newStr += prevChar;
                    }
                }
            } else {
                newStr += s[i];
            }
        }

        cout << newStr << endl;
    }

   return 0;
}
