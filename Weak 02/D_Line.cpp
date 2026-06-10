#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n;
        cin >> n;  // length of the line
        string s;
        cin >> s;  // string representing the people

        // Step 1: Calculate the initial value of the line
        long long initial_value = 0;
        vector<long long> gains(n, 0);
        
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'L') {
                initial_value += i;  // Looking left, counts people to the left
                gains[i] = n - i - 1; // Gain if changed to 'R' (counts people to the right)
            } else {
                initial_value += (n - i - 1);  // Looking right, counts people to the right
                gains[i] = i; // Gain if changed to 'L' (counts people to the left)
            }
        }

        // Step 2: Sort the gains in descending order
        sort(gains.begin(), gains.end(), greater<long long>());
        
        // Step 3: Calculate the result for each k from 1 to n
        vector<long long> result(n);
        result[0] = initial_value + gains[0];
        for (int i = 1; i < n; ++i) {
            result[i] = result[i - 1] + gains[i];
        }
        
        // Output the result for this test case
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
