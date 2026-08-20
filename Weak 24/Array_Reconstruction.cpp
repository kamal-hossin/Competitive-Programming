#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n; 
        vector<int> arr(n - 2);
        long long int currSum = 0;
        for (int i = 0; i <n-2; i++) {
            cin >> arr[i];
            currSum += arr[i];
        }
        long long int mainSum;
        cin >> mainSum;

        long long int remainingNum = mainSum - currSum;

        if (remainingNum < 0) {
            cout << 0 << endl;
        } else if (remainingNum == 0) {
            cout << 1 << endl;
        } else {
            cout << remainingNum + 1 << endl;
        }
    }

     return 0;
}
