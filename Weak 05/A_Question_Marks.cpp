#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt[256] = {};
        for (char ch : s) {
            cnt[ch]++;
        }

        // Each of A, B, C, D has exactly n correct answers
        int correct = 0;
        int usedA = min(cnt['A'], n);
        int usedB = min(cnt['B'], n);
        int usedC = min(cnt['C'], n);
        int usedD = min(cnt['D'], n);

        correct = usedA + usedB + usedC + usedD;

        int remA = n - usedA;
        int remB = n - usedB;
        int remC = n - usedC;
        int remD = n - usedD;

        int total_needed = remA + remB + remC + remD;
        int usedQ = min(cnt['?'], total_needed);
        correct += usedQ;

        cout << correct << endl;
    }

    return 0;
}
