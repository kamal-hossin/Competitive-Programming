#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n;
    cin >> n;

    const int MAX_PRICE = n + 1;
    vector<bool> is_prime(MAX_PRICE + 1, true);

    if (MAX_PRICE >= 0) is_prime[0] = false;
    if (MAX_PRICE >= 1) is_prime[1] = false;

    for (int p = 2; p * p <= MAX_PRICE; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= MAX_PRICE; i += p)
                is_prime[i] = false;
        }
    }

    int k;
    if (n < 3) {
        k = 1;
    } else {
        k = 2;
    }

    cout << k << endl;

    for (int i = 0; i < n; i++) {
        int price = i + 2;
        if (is_prime[price]) {
            cout << 1;
        } else {
            cout << 2;
        }

        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
