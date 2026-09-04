#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int year;
        cin >> year;
        set<int> digits;
        int temp = year;
        while(temp > 0)
        {
            digits.insert(temp % 10);
            temp /= 10;
        }
        if(digits.size() == 4)
        {
            cout << year << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}