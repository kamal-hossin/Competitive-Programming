#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t; 
    while (t--) {
        int n, d;
        cin >> n >> d;

        int switches = 0;
        int current_gun = 0; 
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            int required_gun;
            if (x <= d) {
                required_gun = 0;
            } else {
                required_gun = 1; 
            }

            if (required_gun != current_gun) {
                switches++;
                current_gun = required_gun; 
            }
        }

        cout << switches << endl;
    }


    return 0;
}
