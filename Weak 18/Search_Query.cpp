#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;
    int flag=0;
    for (int i = 0; i < q; i++)
    {
        if (v[i] == x)
        {
            flag = 1;
            break;
        }
       
        else
        {
            flag=0;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Yes"<<endl;
    }

    return 0;
}