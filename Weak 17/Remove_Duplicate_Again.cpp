#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> v;
    int val;
    while (cin >> val && val != -1)
    {
        v.push_back(val);
    }
    v.sort();
    v.unique();
    
    for (int val : v)
    {
        cout << val<<" ";
    }

    return 0;
}