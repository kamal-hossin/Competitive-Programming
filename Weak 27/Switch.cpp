#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    switch(x%2==0)
    {
        case 1:
        cout<<"Even\n";
        break;
        case 2:
        cout<<"Odd\n";

    }
    default{
        cout<<"The Number is Negative";
    }


    return 0;
}