#include<iostream>
using namespace std;

int main()
{
    char s[100];
    // cin>>s;        space soho input nite pare na..
    // cout<<s<<endl;

    fgets(s,100,stdin);
    cout<<s<<endl;

    cin.getline(s,100);
    cout<<s<<endl;




    return 0;
}