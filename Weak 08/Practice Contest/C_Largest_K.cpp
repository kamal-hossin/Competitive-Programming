#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long X, Y;
        cin >> X >> Y;

        // (X - 1) ফাঁক দরকার
        long long gaps = X - 1;

        // gaps = 0 হলে মানে X = 1 → তখন যেকোনো K ব্যবহার করা যায়, কিন্তু প্রশ্নে X ≥ 2
        // তাই নিশ্চিন্তে নিচের ফর্মুলা ব্যবহার করা যাবে:
        long long K = Y / gaps;

        cout << K << endl;
    }

    return 0;
}
