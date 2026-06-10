#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A, B;
    cin >> A >> B;
    int total_boys = A + 1;

    int total_slices = total_boys * 4 + B * 3;

    int pizzas = (total_slices + 7) / 8;

    cout << pizzas << endl;

    return 0;
}
