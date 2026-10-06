#include<bits/stdc++.h>
using namespace std;

int main()
{
    int * a=new int[5];

    for(int i=0; i<5; i++){
        cin>>a[i];
    }

    int *b=new int[20];
    for(int i=0; i<20; i++)
    {
        cin>>b[i];

    }

    for(int i=0; i<20;i++)
    {
        b[i]=a[i];
    }
    cout<<b[i];


      
    return 0;
}