#include<bits/stdc++.h>
using namespace std;


void print_digits(int n) {
    if (n < 10) {
        cout << n << " ";
        return;
    }
    print_digits(n / 10);
    cout << n % 10 << " ";
}



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        print_digits(n);
        cout << endl;
    }
    return 0;
}
