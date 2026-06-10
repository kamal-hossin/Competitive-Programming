#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string base = "uoiea"; 
        string result = "";

        for (int i = 0; i < n; ++i) {
            result += base[i % 5];
        }

        cout << result << endl;
    }

    return 0;
}
