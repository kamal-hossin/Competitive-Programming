#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 2, 1, 2};
    auto it= find(v.begin(), v.end(), 1);
    if(it==v.end())
    {
        cout<< "Not Found";

    }
    else{
        cout<< "Found";
    }

    return 0;
}