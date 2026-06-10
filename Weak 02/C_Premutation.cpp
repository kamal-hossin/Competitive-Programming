#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;  // test case সংখ্যা

    while (t--) {
        int n;
        cin >> n;  // প্রতিটি test case এর n

        vector<vector<int>> sequences(n);  // সিকোয়েন্সের জন্য 2D ভেক্টর

        // সিকোয়েন্সগুলি পড়া
        for (int i = 0; i < n; i++) {
            sequences[i].resize(n - 1);  // সিকোয়েন্সের প্রতিটি সাইজ হবে n-1
            for (int j = 0; j < n - 1; j++) {
                cin >> sequences[i][j];  // সিকোয়েন্সের উপাদান গুলি পড়া
            }
        }

        // একটি হ্যাশম্যাপ তৈরি করে প্রতিটি উপাদান কতবার এসেছে গুন
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                freq[sequences[i][j]]++;  // সিকোয়েন্সে উপাদানটি আসা গুননা
            }
        }

        // এখন আমরা দেখতে চাই কোন উপাদানটি কতবার এসেছে। 
        // সবগুলো উপাদানকে একবার না একবার দেখা যাবে।
        vector<int> result;
        for (auto& elem : freq) {
            if (elem.second == n - 1) {  // যেই উপাদানটি বারবার এসেছে, সেটিই মূল permutation এ থাকতে হবে
                result.push_back(elem.first);
            }
        }

        // ফলস্বরূপ permutation কে সঠিকভাবে আউটপুট করা
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
