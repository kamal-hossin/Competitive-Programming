#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n; 
        int total_breaks = 0;

        for (int i = 0; i < n; ++i) {
            int length;
            cin >> length;

            if (length > 1) {
                total_breaks += (length - 1);
            }
        }

        cout << total_breaks << endl;
    }

    return 0;
}

