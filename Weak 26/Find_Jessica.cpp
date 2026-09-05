#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool flag=false;
    while(ss>>word)
    {
        if("Jessica"==word)
        {
            flag=true;
            break;
        }
        
    }
    if(flag)
    {
        cout <<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    


    return 0;
}