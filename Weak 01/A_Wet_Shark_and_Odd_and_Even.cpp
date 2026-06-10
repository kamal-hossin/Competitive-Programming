#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    long long sum = 0;
    int minOdd = INT_MAX;

    bool hasOdd = false;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        sum += num;

        if (num % 2 == 1)
        {
            minOdd = min(minOdd, num);
            hasOdd = true;
        }
    }

    if (sum % 2 == 1 && hasOdd)
    {
        sum -= minOdd;
    }

    cout << sum << endl;

    return 0;
}
