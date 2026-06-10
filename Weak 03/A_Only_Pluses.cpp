#include <bits/stdc++.h>
using namespace std;

long long int Max(long long int a, long long int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

long long int onlyPluses(int a, int b, int c, long long int result, int count = 0)
{
    if (count == 5)
    {
        return Max(result, a * b * c);
    }

    long long int op1 = onlyPluses(a + 1, b, c, result, count + 1);
    long long int op2 = onlyPluses(a, b + 1, c, result, count + 1);
    long long int op3 = onlyPluses(a, b, c + 1, result, count + 1);
    return Max(Max(op1, op2), op3);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << onlyPluses(a, b, c, a * b * c, 0) << endl;
    }

    return 0;
}