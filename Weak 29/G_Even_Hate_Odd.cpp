#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i =0; i<t; i++)
    {
        int n;
        cin >> n;
        int even=0,odd=0;
        int x;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            if(x%2==0)
            {
                even++;
            }
            else{
                odd++;
            }
        }

        int result=abs(even-odd);
        if (even == 0) {
            result = odd / 2;
        }
        if (odd == 0) {
            result = even / 2;
        }
        if (n % 2 != 0) {
            result = -1;
        }
        cout << result << endl;

    }

    return 0;
}