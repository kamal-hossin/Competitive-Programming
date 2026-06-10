#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  // test case সংখ্যা

    while (t--) {
        int n;
        cin >> n;  // বিট স্ট্রিংয়ের দৈর্ঘ্য
        
        string a, b;
        cin >> a >> b;  // দুটি বিট স্ট্রিং a এবং b
        
        bool possible = true;

        // অপারেশন শুরু
        for (int i = 1; i < n; i++) {
            if (a[i] == '1' && b[i - 1] == '1') {
                // যদি a[i] এবং b[i-1] swap করা যায়, তাহলে a[i] কে '0' করা যাবে
                a[i] = '0';
                b[i - 1] = '0';  // b[i-1]কে '0' করতে হবে
            }
            else if (b[i] == '1' && a[i - 1] == '1') {
                // যদি b[i] এবং a[i-1] swap করা যায়, তাহলে b[i] কে '0' করা যাবে
                b[i] = '0';
                a[i - 1] = '0';  // a[i-1] কে '0' করতে হবে
            }
        }

        // শেষে, যদি a তে কোন '1' থাকে, তাহলে সম্ভব না
        for (int i = 0; i < n; i++) {
            if (a[i] == '1') {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
