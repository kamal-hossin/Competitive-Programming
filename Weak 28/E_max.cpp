#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int Max=INT_MIN;
    for(int i=0; i<n;i++)
    {
        Max=max(a[i],Max);
        
    }
    cout << Max;
    

      
    return 0;
}