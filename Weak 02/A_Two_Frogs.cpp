#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        // Bob এবং Alice এর মধ্যে মাঝে কিছুটা অঞ্চল থাকা দরকার।
        // যদি Alice এবং Bob এর মধ্যে ব্যবধান ১ বা বিজোড় থাকলে Alice গ্যারান্টি জয়ী হবে।
        if (abs(a - b) == 1 || abs(a - b) % 2 == 1) {
            cout << "YES" << endl;  // Alice গ্যারান্টি জিতবে
        } else {
            cout << "NO" << endl;   // Alice হারবে
        }
    }

    return 0;
}
