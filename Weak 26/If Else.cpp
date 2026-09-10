#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    // if(x%2==0)
    // {
    //     cout<<"Even\n"<<endl;
    // }
    // else{
    //     cout<<"Odd\n"<<endl;
    // }
    x%2==0 ? cout<<"Even\n":cout<<"Odd\n";

    return 0;

}