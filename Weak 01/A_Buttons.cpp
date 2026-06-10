#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A, B;
    cin >> A >> B;

    int option1 = A + (A - 1);
    int option2 = B + (B - 1);
    int option3 = A + B;

    int result = max({option1, option2, option3});
    cout << result << endl;

    return 0;
}
