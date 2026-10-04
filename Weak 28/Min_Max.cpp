#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >>a >>b >>c;

    int Max=INT_MIN;
    int Min=INT_MAX;
    Max=max({a,b,c});
    Min=min({a,b,c});

    cout<<Min<< " "<< Max <<endl;
    


      
    return 0;
}