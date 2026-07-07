#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5};
    // vector<int>v2;
    // v2=v;
    v.pop_back();
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    return 0;
}