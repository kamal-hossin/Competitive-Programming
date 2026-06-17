#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());


        int maxProduct, minProduct, maxSum, minSum;


        maxProduct = arr[n-1] * arr[n-1];
        maxProduct = max(maxProduct, arr[0] * arr[0]);
        maxProduct = max(maxProduct, arr[n-1] * arr[n-2]);
        maxProduct = max(maxProduct, arr[0] * arr[1]);

        minProduct = arr[0] * arr[0];
        minProduct = min(minProduct, arr[n-1] * arr[n-1]);
        minProduct = min(minProduct, arr[0] * arr[1]);
        minProduct = min(minProduct, arr[n-1] * arr[0]);

        maxSum = arr[n-1] + arr[n-1];
        maxSum = max(maxSum, arr[n-1] + arr[n-2]);

        
        minSum = arr[0] + arr[0];
        minSum = min(minSum, arr[0] + arr[1]);

        cout << maxProduct << " " << minProduct << " " << maxSum << " " << minSum << "\n";
    }

    return 0;
}
