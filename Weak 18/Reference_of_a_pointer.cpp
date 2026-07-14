#include<bits/stdc++.h>
using namespace std;

void fun(int p)
{
    *p=100;

}

int main()
{
    int x=10;
    int *p=&x;
    fun(p);
    cout<<x<<endl;


    return 0;
}